#include "register.h"
//Function name : GetRegisterInfo()
//Input : �û�ע����Ҫ�� �û���username 
//                       �ǳ�nickname
//                       ����password
//Output :�����û�ע����Ϣ�ĽṹRegister
//Description : ��ȡ�û�ע����Ϣ

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