#include "register.h"

//Function name : ProcessRegisterRes()
//Input : 是否登录成功的标志LOGIN_SUCCESS 0；LOGIN_FALI -1
//Output : 在控制台打印成功或者失败信息，返回登录成功与否标志
//Description : 处理用户注册结果 
int ProcessRegisterRes(REGISTER_RES const *register_res){
	int flag=register_res->flag;
	char *username=register_res->regis.username;
	char *email=register_res->regis.email;

	if(flag==REGISTER_SUCCESS){
		println("Congratulation %s, register successful!\n",username);
	}else if(flag==REGISTER_FAIL_USR){
		println("Register fail %s 用户名已经存在\n",username);
	}else if(flag==REGISTER_FAIL_EMAIL){
		println("Register fail %s 注册邮箱已经存在\n",email);
	}
	return flag;
}
