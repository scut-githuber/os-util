//File name : user_register.h
//Description : 用户注册的数据结构、函数和宏定义

/**
 * include head file
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/**
 * declare define
 */
#define USER_NAME_MIN_LENGTH 6	//用户名最小长度
#define USER_NAME_MAX_LENGTH 26 //用户名最大长度
#define USER_PWD_MIN_LENGTH 6	//用户密码最小长度
#define USER_PWD_MAX_LENGTH 26  //用户密码最大长度
#define SEND_OK 1; 		        //向服务器发送信息成功
#define SEND_ERROR -1; 		    //向服务器发送信息失败
#define REGISTER_SUCCESS 1 	    //用户注册成功
#define REGISTER_USERNAME_FAILURE -1 	//用户注册失败，用户名已经存在


/**
 * declare struct in register modules
 */
 typedef struct user_register_info{
	char username[USER_NAME_MAX_LENGTH];
	char password[USER_PWD_MAX_LENGTH]; 
}Register;

/**
 * declare function 
 */
 extern int ShowRegisterPage();					                            //显示用户注册界面
 extern Register *GetRegisterInfo(int argc, char const *argv[]);			//获取用户注册信息
 extern int SendRegisterMsg(Register *regis);		                        //向服务器发送注册信息
 extern int CheckRegisterRepeat(Register *regis);                           //检查注册用户名是否重复
 extern void GetRegisterResult(Register *regis);			            //获取从服务返回的注册结果信息
 extern int ShowLoginPage();					                            //显示用户登录界面