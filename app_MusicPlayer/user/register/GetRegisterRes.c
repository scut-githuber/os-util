#include "register.h"
// Function name : GetRegisterRes()
// Input : 用户注册信息是否发送成功
// Output : 从服务器返回的注册结果信息
// Description : 获取从服务返回的注册结果信息

REGISTER_RES *GetRegisterRes(Register const *regis_enc){
	char *decode;
	Register *regis;
	regis=(Register *)malloc(sizeof(Register));	

	decode=Decode(regis_enc->username);
	strcpy(regis->username, decode);

	encode=Encode(regis_enc->nickname);	
	strcpy(regis->nickname, decode);

	encode=Encode(regis_enc->password);
	strcpy(regis->password, decode);

	REGISTER_RES *register_res;
	int signal = CheckRegister(regis);

	strcpy(register_res->regis,regis);
	strcpy(register_res->signal,signal);

	return(register_res);
}
