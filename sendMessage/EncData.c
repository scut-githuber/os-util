#include "sendMessage.h"

// Function name : EncData()
// Input:   用户发送的消息内容
// Output:  保存加密后的消息数据结构体指针
// Description: 加密用户发送的消息内容

Data *EncData(Data const *data_src){
    char *encodedata;
    Data *encdata = (Data *)malloc(sizeof(Data));
    encodedata = Encode(data_src->sendmsg);
    strcpy(encdata->sendmsg,encodedata);
    encdata->number = data_src->number;
    return encdata;
}
