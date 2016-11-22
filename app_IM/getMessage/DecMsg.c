#include "getMessage.h"

// Function name : DecMsg()
// Input:   服务器传送的加密的消息内容
// Output:  解密的消息
// Description: 解析消息

Rec_Data *ResMsg(Rec_Data const *data_src){
    char *receivedata;
    Rec_Data *decdata = (Rec_Data *)malloc(sizeof(Rec_Data));
    receivedata = Decode(data_src->receivemsg);
    strcpy(decdata->receivemsg,receivedata);
    decdata->number = data_src->number;
    //返回接收消息结构体指针
    return decdata;
}




