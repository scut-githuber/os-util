#include "sendMessage.h"

// Function name : PostUsrMsg()
// Input:   �û����͵ļ�������
// Output:  ���ط�������post���󷵻صĽ��
// Description: ��ȡ��������post���󷵻صĽ��

int GetSendRes(int post_res){
    if(post_res<0)
    {
        printf("�����������post��Ϣʧ��!");
        return SEND_FAIL;
    }
    return SEND_SUCCESS;
}
