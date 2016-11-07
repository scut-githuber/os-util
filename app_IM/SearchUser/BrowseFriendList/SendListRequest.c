#include "SendListRequest.h"

// Function Name: SendListRequest()
// Input : tcp socket指针
// Output : 无
// Description : 向服务器发送查看好友列表请求

void SendListRequest(int fd)
{
    char *flag = LIST_REQUEST;

    Send_Client(flag,fd);
}
