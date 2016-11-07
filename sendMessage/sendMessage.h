#ifndef SENDMESSAGE_H_INCLUDED
#define SENDMESSAGE_H_INCLUDED

#define DATA_MAX_LENGTH 2000 //�����������ݳ���
#define POST_OK 0 //�������post��Ϣ�ɹ�
#define POST_ERROR -1 //�������post��Ϣʧ��
#define SEND_SUCCESS 0 //��Ϣ���ͳɹ�
#define SEND_FAIL -1 //��Ϣ����ʧ��

/**
 * include head file
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <SimpleEnc.h>

/**
 * declare struct in login modules
 */
//���巢����Ϣ�ṹ
typedef struct user_senddata_info{
    int number; //��Ϣ���
    char sendmsg[DATA_MAX_LENGTH];
}Data;

/**
 * declare function
 */

extern Data *GetUsrMsg();
extern Data *EncData(Data const *data_src);
extern int PostUsrMsg(Data const *data_enc);
extern int GetSendRes(int post_res);
extern int ProcessMsgRes(int send_res);
#endif // SENDMESSAGE_H_INCLUDED
