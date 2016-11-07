#include "login.h"

//Function name : ParseAuthRes
//Input : 从服务器获取的返回结果字符串指针
//Output : 返回登录结果结构LOGIN_RES指针
///Description : 解析从服务器返回的解析登录结果的字符串
LOGIN_RES *ParseAuthRes(char const *auth_res){
  LOGIN_RES *login_res=(LOGIN_RES *)malloc(sizeof(LOGIN_RES));
  return login_res;
}
