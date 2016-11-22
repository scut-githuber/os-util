#include "user_register.h"
// Description : 获取从服务返回的注册结果信息
// Input : 用户注册信息是否发送成功
// Output : 从服务器返回的注册结果信息

void GetRegisterResult(Register const *regis){
	if (CheckRegisterRepeat(regis)==REGISTER_SUCCESS)
	{
	printf("注册成功！\n");
	}
	ShowLoginPage();
}
