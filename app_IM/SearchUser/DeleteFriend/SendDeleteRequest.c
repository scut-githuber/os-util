#include "Generic.h"

// Function Name : SendDeleteRequest()
// Input : tcp socket指针,名字以及长度
// Output : 无
// Description : 客户端向服务器发送删除好友请求

void SendDeleteRequest(TcpSocket *m_tcpsocket,char *name,int len)
{

#if defined(NO_IMPLEMENTATION)

    printf("Sending delete request to the server\n");

#else

    ret = m_tcpsocket->Send(DELETE_FRIEND_REQUEST,sizeof(uint32_t)); // 先发送删除好友参数,告诉服务器准备接受好友名称.
    if(ret)
        m_tcpsocket->Send(name,len); // 发送好友名称
    else
        printf("Failed in sending the request");

#endif

}