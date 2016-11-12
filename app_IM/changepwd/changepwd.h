#ifndef OS_UTIL_CHANGEPWD_H
#define OS_UTIL_CHANGEPWD_H

#define USER_PWD_MIN_LENGTH 6		//注册密码 最小长度
#define USER_PWD_MAX_LENGTH 100 	//注册用户密码 最大长度
#define POST_OK 0; 			//向服务器post信息成功
#define POST_ERROR -1; 			//向服务器post信息失败
#define REGISTER_SUCCESS 0 		//用户注册成功
#define REGISTER_FAIL_USR -1 		//用户注册失败，用户名已经存在

/**
 * include head file
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/**
 * declare struct in changepwd modules
 */
//用户新的用户密码
typedef struct user_change_pwd{
	char new_password[USER_PWD_MAX_LENGTH];
}NEW_PWD

//服务器返回的结果
typedef struct post_resp{
  int status;
  char *res;
}POST_RESP

/**
 * declare function 
 */

int showChangePwd(char const *username);			//显示密码修改页
NEW_PWD getNewPwd();						//获得用户新的密码
NEW_PWD encNewPwd(NEW_PWD const *new_pwd);			//加密用户新密码
POST_RESP *post(NEW_PWD const *pwd_enc);			//向服务器发送修改密码的请求
char *GetChangePwdRes(int post);				//获取请求修改密码的结果字符串
POST_RESP *ParseChangePwdRes(char const*resp);			//解析服务器处理用户修改密码返回的结果
void ShowChangePwdResp(POST_RESP const *resp);			//处理服务器返回的结果


#endif
