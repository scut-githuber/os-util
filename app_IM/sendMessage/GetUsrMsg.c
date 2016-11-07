#include "sendMessage.h"

// Function name : GetUsrMsg()
// Input:   消息id
// Output:  保存用户发送的消息结构体指针
// Description: 从文本框获取发送的消息

Data *GetUsrMsg(int msgid){
    Data *data;
    data = (Data *)malloc(sizeof(Data));
    scanf("%s",data->sendmsg);
    data->number = msgnum;
    return data;
}
