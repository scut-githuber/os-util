#include "login.h"
// Function name : PostAuthMsg()
// Input :   用户登录信息的Auth结构指针
// Output :  返回是否发送成功的信息
//Description :以Post向服务器发送登录信息并返回登录结果

int PostAuthMsg(Auth const *auth){
	Auth *auth_enc;
	auth_enc=EncAuthInfo(auth);
	
	//将加密后的用户登录信息auth_enc上传到服务器
	int signal = CheckLoginInfo(auth_enc);
	//将signal传回

	LOGIN_RES *login_res;
	strcpy(login_res->login_signal, signal);
	strcpy(login_res->auth, auth);

	if (login_res->login_signal == LOGIN_SUCCESS){
		printf("Hello [%d]! Welcome to login in.\n", auth->username);
		ShowUserPage(auth->username);
	}

	return(login_res->login_signal);
}
