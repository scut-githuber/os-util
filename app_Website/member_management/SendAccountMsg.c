#include "membermanagement.h"
// Description : 向服务器发送信息
// Input : account
// Output : 从服务器返回结果信息
int  SendAccountMsg(account)
{
	signal = send(regis);
	if (signal==-1){
		return SEND_ERROR;
	}
	else{
		return SEND_OK;
	}
}