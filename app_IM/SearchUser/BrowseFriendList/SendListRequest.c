#include "Generic.h"

// Function Name: SendListRequest()
// Input : tcp socket指针
// Output : 发送成功返回true,否则返回false
// Description : 向服务器发送查看好友列表请求

bool SendListRequest(TcpSocket *m_tcpsocket)
{
    bool ret = m_tcpsocket->Send(LIST_REQUEST,sizeof(uint32_t)); // 发送好友列表请求
    if(ret)
    {
        printf("Failed in sending request to server\n");
        return false;
    }
    else
        printf("Successfully sent the request to server\n");
}