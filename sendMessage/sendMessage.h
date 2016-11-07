#ifndef SENDMESSAGE_H_INCLUDED
#define SENDMESSAGE_H_INCLUDED

#define DATA_MAX_LENGTH 2000 //发送数据内容长度
#define POST_OK 0 //向服务器post信息成功
#define POST_ERROR -1 //向服务器post信息失败
#define SEND_SUCCESS 0 //消息发送成功
#define SEND_FAIL -1 //消息发送失败

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
//定义发送消息结构
typedef struct user_senddata_info{
    int number; //消息编号
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
