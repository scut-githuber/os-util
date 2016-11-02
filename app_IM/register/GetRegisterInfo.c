#include "register.h"

//Function name : GetRegisterInfo()
//Input : 用户注册需要的 邮箱email 用户名username 密码password
//Output :包含用户注册信息的结构Register
//Description : 获取用户注册信息
Register *GetRegisterInfo(){
	Register *regis;
	regis=(Register *)malloc(sizeof(Register));
	char username[USER_NAME_MAX_LENGTH+1],
		 password[USER_PWD_MAX_LENGTH+1];

	printf("%s", "email:");
	scanf("%s",regis->email);

	printf("%s", "username:");	
	scanf("%s",username);
	if(strlen(username)<=USER_NAME_MAX_LENGTH &&
		strlen(username)>=USER_NAME_MIN_LENGTH)
		strcpy(regis->username,username);
	else{
		printf("username should less than[%d] and longer than[%d]\n"
			, USER_NAME_MAX_LENGTH,USER_NAME_MIN_LENGTH);
		exit(0);
	}

	printf("%s", "password:");
	scanf("%s",password);
	if(strlen(password)<=USER_PWD_MAX_LENGTH &&
		strlen(password)>=USER_PWD_MIN_LENGTH)
		strcpy(regis->password,password);
	else{
		printf("password should less than[%d] and longer than[%d]\n"
			, USER_PWD_MAX_LENGTH,USER_PWD_MIN_LENGTH);
		exit(0);
	}	

	return regis;

}
// int main(){
// 	Register *regis=GetRegisterInfo();
// 	printf("%s\n", regis->email);
// 	printf("%s\n", regis->username);
// 	printf("%s\n", regis->password);
// }