#include "register.h"
// Function name : EncRegisterInfo()
// Input : 用户注册信息的Register结构指针
// Output : 加密后的用户注册信息的Register结构指针
// Description : 加密用户注册信息
#include "../enc/enc.h"

Register *EncRegisterInfo(Register const *regis0){
	char *encode;
	Register *regis_enc;
	regis_enc=(Register *)malloc(sizeof(Register));	

	encode=Encode(regis0->username);
	strcpy(regis_enc->username,encode);

	encode=Encode(regis0->nickname);	
	strcpy(regis_enc->nickname,encode);

	encode=Encode(regis0->password);
	strcpy(regis_enc->password,encode);

	return regis_enc;
}
