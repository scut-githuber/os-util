#include "sendMessage.h"

// Function name : GetUsrMsg()
// Input:   ��Ϣid
// Output:  �����û����͵���Ϣ�ṹ��ָ��
// Description: ���ı����ȡ���͵���Ϣ

Data *GetUsrMsg(int msgid){
    Data *data;
    data = (Data *)malloc(sizeof(Data));
    scanf("%s",data->sendmsg);
    data->number = msgnum;
    return data;
}
