#include "login.h"
//Function name : ParseAuthRes
//Input : 从服务器获取的返回结果字符串指针
//Output : 如果登录成功返回LOGIN_SUCCESS;失败返回LOGIN_FAIL
LOGIN_RES *ParseAuthRes(char const *auth_res){
  LOGIN_RES *login_res=(LOGIN_RES *)malloc(sizeof(LOGIN_RES));
  return login_res;
}
