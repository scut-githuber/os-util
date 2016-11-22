#include "user_register.h"
// Input  : 用户注册信息
// Output : 是否发送成功
// Description : 向服务器发送注册信息

int SendRegisterMsg(Register const *regis){
	Register *regis;
	int signal;
	signal = send(regis);
	if (signal==-1){
		return SEND_ERROR;
	}
	else{
		return SEND_OK;
	}
}