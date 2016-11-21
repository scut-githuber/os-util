#include "login.h"
// Function Name : CheckLoginInfo()
// Input : 用户登录信息Auth结构指针
// Output: 是否可以登录成功的信号
// Descripiton : 检查登录信息是否正确

int CheckLoginInfo(Auth const *auth){
	//获取服务器用户信息列表ServerUserList
	int index = ServerUserList.GetUserIndex(auth->username);
    if (index > -1){
		char *pwd = ServerUserList.GetUser(index)->password;
		if (pwd == auth->password){
			return LOGIN_SUCCESS;
		}
		else{
			printf("Password is wrong.\n");
			return LOGIN_PWD_FAILURE;
		}
	}
	else{
		printf("Username doesn't exist.\n");
		return LOGIN_USER_FAILURE;
	}

}
