#include "sendMessage.h"

// Function name : EncData()
// Input:   �û����͵���Ϣ����
// Output:  ������ܺ����Ϣ���ݽṹ��ָ��
// Description: �����û����͵���Ϣ����

Data *EncData(Data const *data_src){
    char *encodedata;
    Data *encdata = (Data *)malloc(sizeof(Data));
    encodedata = Encode(data_src->sendmsg);
    strcpy(encdata->sendmsg,encodedata);
    encdata->number = data_src->number;
    return encdata;
}
