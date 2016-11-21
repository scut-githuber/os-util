#include "login.h"
// Function name : GetUsrAndPwd()
// Input:   输入登录用户名,登录用户密码
// Output:  保存用户登录信息的Auth结构体指针
// Description:  获取登录名和密码并在前台验证

Auth *GetUsrAndPwd(int argc, char const *argv[]){
	ShowLoginPage()

	Auth *auth;
	auth=(Auth *)malloc(sizeof(Auth));
	char username[USER_NAME_MAX_LENGTH+1],
		 password[USER_PWD_MAX_LENGTH+1];

	printf("%s", "Username:");	
	scanf("%s",username);
	if(strlen(username)<=USER_NAME_MAX_LENGTH &&
		strlen(username)>=USER_NAME_MIN_LENGTH)
		strcpy(auth->username,username);
	else{
		printf("Username should less than[%d] and longer than[%d]\n", USER_NAME_MAX_LENGTH,USER_NAME_MIN_LENGTH);
		exit(0);
	}
	
	printf("%s:","Password" );
	/*密码显示为*的方法*/
    scanf("%s",auth->password);

	return auth;
}
