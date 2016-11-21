#include "register.h"
//Function name : ProcessRegisterRes()
//Input : 用户注册结果信息REGISTER_RES指针
//Output : 打印成功或者失败信息，返回注册成功与否标志
//Description : 处理显示用户注册结果 

int ProcessRegisterRes(REGISTER_RES const *register_res){
	int signal=register_res->signal;
	char *username=register_res->regis.username;
	char *nickname=register_res->regis.nickname;

	if(signal==REGISTER_SUCCESS){
		println("Congratulation %s, register successful!\n",username);
	}else if(signal==REGISTER_USERNAME_FAILURE){
		println("Register fail %s 用户名已经存在\n",username);
	}else if(signal==REGISTER_NICKNAME_FAILURE){
		println("Register fail %s 昵称已经存在\n",nickname);
	}
	return signal;
}
