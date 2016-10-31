#include "Generic.h"

// Function Name : SendViewRequest()
// Input : tcp socket指针
// Output : 发送成功返回true,否则返回false
// Description : 客户端向服务器发送查看好友资料请求

bool SendViewRequest(TcpSocket *m_tcpsocket)
{

#if defined(NO_IMPLEMENTATION)

    printf("Profile request has been sent");
    return true;

#else

    bool ret = m_tcpsocket->Send(PROFILE_REQUEST_AGREE,sizeof(uint32_t)); // 发送查看好友资料请求
    if(ret)
    {
        printf("Failed in sending request to server\n");
        return false;
    }
    else
        printf("Successfully sent the request to server\n");

#endif

}