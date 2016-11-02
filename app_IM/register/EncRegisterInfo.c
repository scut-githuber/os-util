#include "register.h"

// Function name : EncRegisterInfo()
// Input : 用户注册信息的Register结构指针
// Output : 加密后的用户注册信息的Register结构指针
// Description : 加密用户注册信息
Register *EncRegisterInfo(Register const *regis_src){
	char *encode;
	Register *regis_enc;
	regis_enc=(Register *)malloc(sizeof(Register));	

	encode=Encode(regis_src->email);	
	strcpy(regis_enc->email,encode);

	encode=Encode(regis_src->username);
	strcpy(regis_enc->username,encode);

	encode=Encode(regis_src->password);
	strcpy(regis_enc->password,encode);

	return regis_enc;
}
int main(){
	Register *regis_src;
	regis_src=(Register *)malloc(sizeof(Register));
	strcpy(regis_src->email,"wzt@163.com");
	strcpy(regis_src->username,"wzt");
	strcpy(regis_src->password,"123sda");
	Register *regiss=EncRegisterInfo(regis_src);
	printf("%s\n", regiss->email);
	printf("%s\n", regiss->username);
	printf("%s\n", regiss->password);
}
