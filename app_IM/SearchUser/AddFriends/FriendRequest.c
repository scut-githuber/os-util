#include "Generic.h"

// Function Name : SendFriendRequest()
// Input : tcpsocket指针,名字以及长度,请求参数(发送请求或者接受请求)
// Output : 无
// Description : 发送好友请求,

void SendFriendRequest(TcpSocket *m_tcpsocket,char *name,int len,uint32_t nFlag)
{
    printf("Sending friend request to the server\n");

    ret = m_tcpsocket->Send(nFlag,sizeof(uint32_t)); // 先发送请求参数,告诉服务器准备接受好友名称.
    if(ret)
        m_tcpsocket->Send(name,len); // 发送好友名称
    else
        printf("Failed in sending the request");
}