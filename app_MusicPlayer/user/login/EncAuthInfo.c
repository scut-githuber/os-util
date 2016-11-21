#include "login.h"
// Function name : EncAuthInfo()
// Input : 用户登录信息的Auth结构体指针
// Output : 加密后的用户登录信息Auth的指针
// Description :  加密用户登录信息
#include "../enc/enc.h"

Auth *EncAuthInfo(Auth const *auth0){
	char *encode;
	Auth *authEnc;
	authEnc=(Auth *)malloc(sizeof(Auth));

	encode=Encode(auth0->username);
	strcpy(authEnc->username,encode);

	encode=Encode(auth0->password);	
	strcpy(authEnc->password,encode);

	return authEnc;
}