#ifndef OS_UTIL_MODIFYPROFILE_H
#define OS_UTIL_MODIFYPROFILE_H


#define USER_NAME_MAX_LENGTH 20      //登录用户 最大长度
#define USER_NICK_NAME_MAX_LENGTH 30 //用户昵称 最大长度
#define USER_SHORT_INTRODUCE 255     //用户个人简介 最大长度
#define USER_HEAD_IMAGE 255	     //用户头像
#define USER_EMAIL 255		     //用户电子邮箱
#define USER_ADDRESS 255	     //用户住址
#define USER_BIRTHDAY 255	     //用户生日
#define USER_NATURE_TAG 20	     //用户性格标签
#define USER_NATURE_TAG_NUM 5	     //用户性格标签数上限

/**
 * include head file
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/**
 * declare struct in viewprofile modules
 */

//用户个人信息
typedef struct user_profile{
  char username[USER_NAME_MAX_LENGTH];			//用户登录账号
  char nickname[USER_NICK_NAME_MAX_LENGTH];		//用户昵称
  char user_short_introduce[USER_SHORT_INTRODUCE];	//用户个人简介
  char user_head_image[USER_HEAD_IMAGE];		//用户头像
  char user_email[USER_EMAIL];				//用户注册邮箱
  char user_address[USER_ADDRESS];			//用户地址
  char user_birthday[USER_BIRTHDAY];			//用户生日
  char user_nature_tags[USER_NATURE_TAG_NUM][USER_NATURE_TAG];	//用户性格标签
  char user_tel[13]
  int age;	//用户年龄
  long level;	//用户等级

}USER_PROFILE

//服务器返回的结果
typedef struct post_resp{
  int status;
  char *res;
}POST_RESP

/**
 * declare functions in viewprofile modules
 */

int showProfileEdit(char const*username);			//显示修改用户个人信息的界面
USER_PROFILE getModifyInput();					//获取用户编辑的用户资料
USER_PROFILE encModifyInfo(USER_PROFILE const*modify_src);	//加密用户个人信息
POST_RESP *post(USER_PROFILE const*modify_enc);			//向服务器发送修改个人信息的请求
char *GetModifyRes(int post);					//获取请求修改用户信息的结果字符串
POST_RESP *ParseModifyRes(char const*resp);			//解析服务器处理用户修改个人信息返回的结果
void ShowModifyResp(POST_RESP const *resp);			//处理服务器返回的结果——控制台显示新的用户信息


#endif
