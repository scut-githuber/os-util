//File name : Generic.h
//Description : 关于登录验证的函数定义与常用宏
#ifndef OS_UTIL_LOGIN_H
#define OS_UTIL_LOGIN_H

#define USER_NAME_MIN_LENGTH 3	//登录用户名 最小长度
#define USER_NAME_MAX_LENGTH 20 //登录用户名 最大长度
#define USER_PWD_MIN_LENGTH 6	//登录用户密码 最小长度
#define USER_PWD_MAX_LENGTH 100 //登录用户密码 最大长度

/**
 * include head file
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/**
 * declare struct in login modules
 */
//定义存储用户登录验证信息的结构
typedef struct user_auth_info{
	char username[USER_NAME_MAX_LENGTH];
	char password[USER_PWD_MAX_LENGTH]; 
}Auth;


/**
 * declare function 
 */
extern Auth *GetUsrAndPwd(int argc, char const *argv[]);
extern Auth *EncAuthInfo(Auth const *auth_src);
extern char *Encode(char const *prim);
extern char *Decode(char const *code);

#endif
