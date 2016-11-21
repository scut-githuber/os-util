//File name : classify.h
//Description : ���ڵ�¼��֤�ĺ�������
#ifndef PLAYER_CLASSIFY_H
#define PLAYER_CLASSIFY_H

#define USER_ID_MAX_LENGTH 16	//�û�ID ��󳤶�
#define USER_NAME_MAX_LENGTH 32 //�û��� ���
#define CLASS_LIST_MAX_LENGTH 100	//�����б� ��󳤶�
#define CLASS_NAME_MAX_LENGTH 64	//�������� ��󳤶�

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
//��������б�Ľṹ
typedef struct class_list{
	char *userID[USER_ID_MAX_LENGTH];
	MusicClass *userClassList[CLASS_LIST_MAX_LENGTH]; 
}Class_List;

//���������Ϣ�ṹ
typedef struct music_class{
	char *className[CLASS_NAME_MAX_LENGTH];
}Music_Class;

/**
 * declare function 
 */
extern bool addRequest(char *userID[USER_ID_MAX_LENGTH]);            //��ӷ�������
extern bool pop();	                                                //��������
extern bool addClass(char *userID[USER_ID_MAX_LENGTH],Music_Class musicClass);				//��������������Ϣ
extern Class_List updateList(char *userID[USER_ID_MAX_LENGTH]);			    //�����б���Ϣ

#endif

