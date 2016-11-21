#include "register.h"
// Function Name : CheckRegister()
// Input : 用户注册信息Register结构指针
// Output :是否可以注册成功的信号
// Descripiton : 检查注册信息是否重复

int CheckRegister(Register const *regis){
	//获取服务器用户信息列表ServerUserList
    if (ServerUserList.usernameList.contains(regis->username)){
		return REGISTER_USERNAME_FAILURE;
	}
	if (ServerUserList.nicknameList.contains(regis->nickname)){
		return REGISTER_NICKNAME_FAILURE;
	}
	//将regis用户注册信息上传服务器
	ServerUserList.insert(regis)

	return REGISTER_SUCCESS;
}
