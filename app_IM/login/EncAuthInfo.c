#include "login.h"

// Function name : EncAuthInfo()
// Input:   用户登录信息的Auth结构体指针
// Output:  加密后的用户登录信息auth的指针
// Description:从GetUsrAndPwd()获取登录信息Auth


Auth *EncAuthInfo(Auth const *auth_src){
	char *encodeUsr,*encodePwd;
	Auth *authEnc;
	authEnc=(Auth *)malloc(sizeof(Auth));

	encodeUsr=encode(auth_src->username);
	encodePwd=encode(auth_src->password);
	
	strcpy(authEnc->username,encodeUsr);
	strcpy(authEnc->password,encodePwd);
	return authEnc;
}




// int main(int argc, char const *argv[]){
//  	Auth *auth;
// 	auth=(Auth *)malloc(sizeof(Auth));
// 	strcpy(auth->username,"wzt");
// 	strcpy(auth->password,"wzt123");

//  	Auth *authEnc=EncAuthInfo(auth);
//  	printf("Encode Auth username:%s,passowrd:%s\n",authEnc->username,authEnc->password);

//  	strcpy(authEnc->password,decode(authEnc->password));
//  	printf("Decode Auth username:%s,passowrd:%s\n",authEnc->username,authEnc->password);
//     return 0;
// }