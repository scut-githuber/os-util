//File name : register.h
//Description : 关于用户注册的函数定义与常用宏
#ifndef OS_UTIL_REGISTER_H
#define OS_UTIL_REGISTER_H

#define USER_NAME_MIN_LENGTH 3	//注册用户名 最小长度
#define USER_NAME_MAX_LENGTH 20 //注册用户名 最大长度
#define USER_PWD_MIN_LENGTH 6	//注册用户密码 最小长度
#define USER_PWD_MAX_LENGTH 100 //注册用户密码 最大长度
#define POST_OK 0; 		//向服务器post信息成功
#define POST_ERROR -1; 		//向服务器post信息失败
#define REGISTER_SUCCESS 0 	//用户注册成功
#define REGISTER_FAIL_USR -1 	//用户注册失败，用户名已经存在
#define REGISTER_FAIL_EMAIL -2 	//用户注册失败，注册邮箱已经存在
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
//定义存储用户注册信息的结构
typedef struct user_register_info{
	char email[255];
	char username[USER_NAME_MAX_LENGTH];
	char password[USER_PWD_MAX_LENGTH]; 
}Register;
//定义存储用户注册结果信息的结构
typedef struct user_register_res{
	int login_flag;
	Register regis;
}REGISTER_RES;

/**
 * declare function 
 */
extern int ShowRegisterPage();					//显示用户注册界面
extern Register *GetRegisterInfo();				//获取用户注册信息
extern Register *EncRegisterInfo(Register const *regis_src);	//加密用户注册信息
extern int PostRegisterMsg(Register *regis_enc);		//以Post方式向服务器发送注册信息
extern char *Encode(char const *prim);				//简单的加密字符串方法,可从CommonTools/SimpleEnc中获取
extern char *Decode(char const *code);				//简单的解密字符串方法,可从CommonTools/SimpleEnc中获取
extern char *GetRegisterRes(int post_res);			//获取从服务返回的注册结果信息
extern REGISTER_RES *ParseRegisterRes(char const *regis_res);	//解析从服务器返回的解析注册结果的字符串
extern int ProcessRegisterRes(REGISTER_RES const *register_res);//处理用户注册结果 

#endif
