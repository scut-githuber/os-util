#include "sendMessage.h"

// Function name : ProcessMsgRes()
// Input:   ��Ϣ���ͽ��
// Output:  �������ʧ�ܣ�����̨��ӡ����Ϣ����ʧ�ܡ�
// Description: �������������������Ϣ���ͽ��


int ProcessMsgRes(int sendRes){
	int flag = sendRes;
	if( flag == SEND_FAIL){
         println("��Ϣ����ʧ��");
	}
	return flag;
}

