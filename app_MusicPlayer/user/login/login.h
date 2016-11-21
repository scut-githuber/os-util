//File name : login.h
//Description : 关于登录验证的函数定义
#ifndef PLAYER_LOGIN_H
#define PLAYER_LOGIN_H

#define USER_NAME_MIN_LENGTH 2	//登录用户名 最小长度
#define USER_NAME_MAX_LENGTH 20 //登录用户名 最大长度
#define USER_PWD_MIN_LENGTH 6	//登录用户密码 最小长度
#define USER_PWD_MAX_LENGTH 50  //登录用户密码 最大长度
#define LOGIN_SUCCESS 0 		//用户登录成功
#define LOGIN_USER_FAILURE -1   //用户登录失败，用户名不存在
#define LOGIN_PWD_FAILURE -2 	//用户登录失败，密码错误

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

//定义存储用户登录结果信息的结构
typedef struct user_login_res{
	int login_signal;
	Auth auth;
}LOGIN_RES;

/**
 * declare function 
 */
extern int ShowLoginPage();					                //显示用户登录界面
extern Auth *GetUsrAndPwd(int argc, char const *argv[]);	//获取用户输入的用户名和密码
extern Auth *EncAuthInfo(Auth const *auth_src);				//对用户信息进行加密
extern int CheckLoginInfo(Auth const *auth);                //检查登录信息是否重复
extern int PostAuthMsg(Auth const *auth);				    //向服务器POST发送用户加密后登录信息
extern int ShowUserPage(char const *username);              //显示用户登陆成功后界面

#endif

