//File name : register.h
//Description : �����û�ע��ĺ�������
#ifndef PLAYER_REGISTER_H
#define PLAYER_REGISTER_H

#define USER_NAME_MIN_LENGTH 2	//ע���û��� ��С����
#define USER_NAME_MAX_LENGTH 20 //ע���û��� ��󳤶�
#define USER_PWD_MIN_LENGTH 6	//ע���û����� ��С����
#define USER_PWD_MAX_LENGTH 50  //ע���û����� ��󳤶�
#define POST_OK 0; 		        //�������post��Ϣ�ɹ�
#define POST_ERROR -1; 		    //�������post��Ϣʧ��
#define REGISTER_SUCCESS 0 	    //�û�ע��ɹ�
#define REGISTER_USERNAME_FAILURE -1 	//�û�ע��ʧ�ܣ��û����Ѿ�����
#define REGISTER_NICKNAME_FAILURE -2 	//�û�ע��ʧ�ܣ��ǳ��Ѿ�����

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
//����洢�û�ע����Ϣ�Ľṹ
typedef struct user_register_info{
	char username[USER_NAME_MAX_LENGTH];
	char nickname[USER_NAME_MAX_LENGTH];
	char password[USER_PWD_MAX_LENGTH]; 
}Register;

//����洢�û�ע������Ϣ�Ľṹ
typedef struct user_register_res{
	int signal;
	Register regis;
}REGISTER_RES;

/**
 * declare function 
 */
extern int ShowRegisterPage();					                            //��ʾ�û�ע�����
extern Register *GetRegisterInfo(int argc, char const *argv[]);				//��ȡ�û�ע����Ϣ
extern Register *EncRegisterInfo(Register const *regis_src);	            //�����û�ע����Ϣ
extern int PostRegisterMsg(Register *regis);		                        //��Post��ʽ�����������ע����Ϣ
extern int CheckRegister(Register *regis);                                  //���ע����Ϣ�Ƿ��ظ�
extern REGISTER_RES *GetRegisterRes(Register *regis_enc);			        //��ȡ�ӷ��񷵻ص�ע������Ϣ
extern REGISTER_RES *ParseRegisterRes(char const *regis_res);	            //�����ӷ��������صĽ���ע�������ַ���
extern int ProcessRegisterRes(REGISTER_RES const *register_res);            //�����û�ע����
extern int ShowLoginPage();					                                //��ʾ�û���¼����

#endif