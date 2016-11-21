#include "register.h"
//Function name : GetRegisterInfo()
//Input : 用户注册需要的 用户名username 
//                       昵称nickname
//                       密码password
//Output :包含用户注册信息的结构Register
//Description : 获取用户注册信息

Register *GetRegisterInfo(int argc, char const *argv[]){
	ShowRegisterPage()
	Register *regis;
	regis=(Register *)malloc(sizeof(Register));
	char username[USER_NAME_MAX_LENGTH+1],
		 nickname[USER_NAME_MAX_LENGTH+1],
		 password[USER_PWD_MAX_LENGTH+1];

	printf("%s", "Username:");	
	scanf("%s",username);
	if(strlen(username)<=USER_NAME_MAX_LENGTH &&
		strlen(username)>=USER_NAME_MIN_LENGTH)
		strcpy(regis->username,username);
	else{
		printf("Username should less than[%d] and longer than[%d]\n", USER_NAME_MAX_LENGTH,USER_NAME_MIN_LENGTH);
		exit(0);
	}

	printf("%s", "Nickname:");	
	scanf("%s",nickname);
	if(strlen(nickname)<=USER_NAME_MAX_LENGTH &&
		strlen(nickname)>=USER_NAME_MIN_LENGTH)
		strcpy(regis->nickname,nickname);
	else{
		printf("Nickname should less than[%d] and longer than[%d]\n", USER_NAME_MAX_LENGTH,USER_NAME_MIN_LENGTH);
		exit(0);
	}

	printf("%s", "Password:");
	scanf("%s",password);
	if(strlen(password)<=USER_PWD_MAX_LENGTH &&
		strlen(password)>=USER_PWD_MIN_LENGTH)
		strcpy(regis->password,password);
	else{
		printf("Password should less than[%d] and longer than[%d]\n", USER_PWD_MAX_LENGTH,USER_PWD_MIN_LENGTH);
		exit(0);
	}

	return regis;
}