#include "user_register.h"
// Descripiton : 检查注册信息是否重复
// Input : 用户注册信息
// Output :是否可以注册成功的信号


int CheckRegisterRepeat(Register const *regis){
    if(ServerUserList.find(regis) == REGISTER_USERNAME_FAILURE)
	{
	    return REGISTER_USERNAME_FAILURE;
	}
	else
	{
		return REGISTER_SUCCESS;
	}
}
