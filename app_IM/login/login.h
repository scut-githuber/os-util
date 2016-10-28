//File name : Generic.h
//Description : 关于登录验证的函数定义与常用宏
#ifndef OS_UTIL_LOGIN_H
#define OS_UTIL_LOGIN_H

#define USER_NAME_MIN_LENGTH 3	//登录用户名 最小长度
#define USER_NAME_MAX_LENGTH 20 //登录用户名 最大长度
#define USER_PWD_MIN_LENGTH 6	//登录用户密码 最小长度
#define USER_PWD_MAX_LENGTH 100 //登录用户密码 最大长度
#define POST_OK 0; //向服务器post信息成功
#define POST_ERROR -1; //向服务器post信息失败
#define LOGIN_SUCCESS 0 //用户登录成功
#define LOGIN_FAIL_USR -1 //用户登录失败，用户名不存在
#define LOGIN_FAIL_PWD -2 //用户登录失败，密码错误
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
typedef struct user_login_res{
	int login_flag;
	Auth auth;
}LOGIN_RES;

/**
 * declare function 
 */
extern Auth *GetUsrAndPwd(int argc, char const *argv[]);//获取用户输入的用户名和密码
extern Auth *EncAuthInfo(Auth const *auth_src);//对用户信息进行加密
extern char *Encode(char const *prim);//简单的加密字符串方法
extern char *Decode(char const *code);//简单的解密字符串方法
extern int PostAuthMsg(Auth const *auth_enc);//向服务器POST发送用户加密后登录信息
extern char *GetAuthRes(int post_res);//获取服务器返回的登录验证结果
extern LOGIN_RES *ParseAuthRes(char const *auth_res)//返回用户是否登录成功的信息
extern int ProcessAuthRes(LOGIN_RES const *login_res)//控制台打印登录信息，返回是否成功登录的flag
#endif

