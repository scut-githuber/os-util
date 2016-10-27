#include "login.h"


// Function name : GetUsrAndPwd()
// Input:   从键盘输入登录用户名 登录用户密码
// Output:  保存用户登录信息的Auth结构体指针
// Description:从输入框获取登录名和密码(暂时用命令行代替输入框)

Auth *GetUsrAndPwd(int argc, char const *argv[]){
	Auth *auth;
	auth=(Auth *)malloc(sizeof(Auth));
	printf("%s:","Username" );
	scanf("%s",auth->username);
	/*密码不应该回显*/
	printf("%s:","Password" );
    scanf("%s",auth->password);

  
	
	return auth;
}

// int main(int argc, char const *argv[])
// {	
// 	Auth *auth=GetUsrAndPwd(argc,argv);
// 	printf("usr=%s\n", auth->username);
// 	printf("pwd=%s\n", auth->password);
// }