#include "sendMessage.h"

// Function name : ProcessMsgRes()
// Input:   消息发送结果
// Output:  如果发送失败，控制台打印“消息发送失败”
// Description: 解析服务器结果返回消息发送结果


int ProcessMsgRes(int sendRes){
	int flag = sendRes;
	if( flag == SEND_FAIL){
         println("消息发送失败");
	}
	return flag;
}

