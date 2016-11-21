#include "register.h"
//Function name : ParseRegisterRes() 
//Input : 从服务器获取的返回结果字符串指针
//Output :返回注册结果结构REGISTER_RES指针
//Description : 解析从服务器返回的解析注册结果的字符串

REGISTER_RES *ParseRegisterRes(char const *regis_res){
  REGISTER_RES *register_res=(REGISTER_RES *)malloc(sizeof(REGISTER_RES));
  return register_res;
}
