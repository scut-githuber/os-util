#ifndef GETMESSAGE_H_INCLUDED
#define GETMESSAGE_H_INCLUDED

#define MSG_DATA_MAX_LENGTH 2000
#define REC_MSG_SUCCESS 0
#define REC_MSG_ERR -1
#define SAVE_SUCCESS 0
#define SAVE_FAIL -1
/**
  * include head file
  */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <SimpleEnc.h>

//定义接受消息结构
typedef struct user_receivedata_info{
            int number ; //消息编号
            char receivemsg[MSG_DATA_MAX_LENGTH];
}Rec_Data;


extern Rec_Data *ResMsg(Rec_Data const *data_src); //接收服务器发送的聊天消息
extern Rec_Data *DecMsg(Rec_Data const *data_src);//解密消息
extern void ShowMsg(Rec_Data const *data_src);//显示消息
extern int SaveMsg(Rec_Data const *data_src);//保存消息到数据库

#endif // GETMESSAGE_H_INCLUDED
