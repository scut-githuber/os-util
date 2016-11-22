#include "user_register.h"
//Description : 获取用户注册信息
//Input : 用户名username 
//        密码password
//        重复密码password_again
//Output :用户名与密码


Register *GetRegisterInfo(int argc, char const *argv[]){
	Register *regis;
	regis=(Register *)malloc(sizeof(Register));
	char username[USER_NAME_MAX_LENGTH+1],
         password[USER_PWD_MAX_LENGTH+1]，
		 password_again[USER_PWD_MAX_LENGTH+1];

	printf("%s", "姓名:");	
	scanf("%s",username);
	if(strlen(username)<=USER_NAME_MAX_LENGTH &&
		strlen(username)>=USER_NAME_MIN_LENGTH)
		strcpy(regis->username,username);
	else{
		printf("用户名字符个数在%d和%d之间\n", USER_NAME_MAX_LENGTH,USER_NAME_MIN_LENGTH);
		exit(0);
	}

	

	printf("%s", "密码:");
	scanf("%s",password);
	printf("%s", "请再次输入密码:");
	scanf("%s",password_again);
	if(password!=password_again)
	{
		printf("两次密码输入不相同");
		exit(0);
	}
	if(strlen(password)<=USER_PWD_MAX_LENGTH &&
		strlen(password)>=USER_PWD_MIN_LENGTH)
		strcpy(regis->password,password);
	else{
		printf("密码字符个数在%d和%d之间\n", USER_PWD_MAX_LENGTH,USER_PWD_MIN_LENGTH);
		exit(0);
	}
	regis[0]=username;
	regis[strlen(username)]=passwordsword
	return regis;
}