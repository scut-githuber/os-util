#include "register.h"
// Function name : PostRegisterMsg()
// Input : 加密后的用户注册信息的Register结构指针
// Output : 获得是否发送成功的消息 
// Description : 以Post方式向服务器发送注册信息

int PostRegisterMsg(Register const *regis){
	Register *regis_enc;
	regis_enc=EncRegisterInfo(regis);
	if (CheckRegister(regis_enc)){
		return POST_OK;
	}
	else{
		return POST_ERROR;
	}
}
