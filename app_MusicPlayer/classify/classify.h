//File name : classify.h
//Description : 关于登录验证的函数定义
#ifndef PLAYER_CLASSIFY_H
#define PLAYER_CLASSIFY_H

#define USER_ID_MAX_LENGTH 16	//用户ID 最大长度
#define USER_NAME_MAX_LENGTH 32 //用户名 最大长
#define CLASS_LIST_MAX_LENGTH 100	//分类列表 最大长度
#define CLASS_NAME_MAX_LENGTH 64	//分类名称 最大长度

/**
 * include head file
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/**
 * declare struct in classify modules
 */
//定义分类列表的结构
typedef struct class_list{
	char *userID[USER_ID_MAX_LENGTH];
	MusicClass *userClassList[CLASS_LIST_MAX_LENGTH]; 
}Class_List;

//定义分类信息结构
typedef struct music_class{
	char *className[CLASS_NAME_MAX_LENGTH];
}Music_Class;

/**
 * declare function 
 */
extern bool addRequest(char *userID[USER_ID_MAX_LENGTH]);            //添加分类请求
extern bool pop();	                                                //跳出弹窗
extern bool addClass(char *userID[USER_ID_MAX_LENGTH],Music_Class musicClass);				//传入新增分类信息
extern Class_List updateList(char *userID[USER_ID_MAX_LENGTH]);			    //更新列表信息

#endif

