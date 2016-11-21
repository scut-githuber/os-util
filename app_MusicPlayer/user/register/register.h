//File name : register.h
//Description : 关于用户注册的函数定义
#ifndef PLAYER_REGISTER_H
#define PLAYER_REGISTER_H

#define USER_NAME_MIN_LENGTH 2	//注册用户名 最小长度
#define USER_NAME_MAX_LENGTH 20 //注册用户名 最大长度
#define USER_PWD_MIN_LENGTH 6	//注册用户密码 最小长度
#define USER_PWD_MAX_LENGTH 50  //注册用户密码 最大长度
#define POST_OK 0; 		        //向服务器post信息成功
#define POST_ERROR -1; 		    //向服务器post信息失败
#define REGISTER_SUCCESS 0 	    //用户注册成功
#define REGISTER_USERNAME_FAILURE -1 	//用户注册失败，用户名已经存在
#define REGISTER_NICKNAME_FAILURE -2 	//用户注册失败，昵称已经存在

/**
 * include head file
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/**
 * declare struct in register modules
 */
//定义存储用户注册信息的结构
typedef struct user_register_info{
	char username[USER_NAME_MAX_LENGTH];
	char nickname[USER_NAME_MAX_LENGTH];
	char password[USER_PWD_MAX_LENGTH]; 
}Register;

//定义存储用户注册结果信息的结构
typedef struct user_register_res{
	int signal;
	Register regis;
}REGISTER_RES;

/**
 * declare function 
 */
extern int ShowRegisterPage();					                            //显示用户注册界面
extern Register *GetRegisterInfo(int argc, char const *argv[]);				//获取用户注册信息
extern Register *EncRegisterInfo(Register const *regis_src);	            //加密用户注册信息
extern int PostRegisterMsg(Register *regis);		                        //以Post方式向服务器发送注册信息
extern int CheckRegister(Register *regis);                                  //检查注册信息是否重复
extern REGISTER_RES *GetRegisterRes(Register *regis_enc);			        //获取从服务返回的注册结果信息
extern REGISTER_RES *ParseRegisterRes(char const *regis_res);	            //解析从服务器返回的解析注册结果的字符串
extern int ProcessRegisterRes(REGISTER_RES const *register_res);            //处理用户注册结果
extern int ShowLoginPage();					                                //显示用户登录界面

#endif