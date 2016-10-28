#include "ReceiveFriendRequest.h"

// Function Name : ReceiveFriendRequest()
// Input : tcpsocket指针
// Output: 好友名称
// Description : 接收来自服务器转发的好友请求

char *ReceiveFriendRequest(TcpSocket *m_tcpsocket)
{
    char buff[MAXSIZE];
    bool ret;
    uint32_t flag_buff;
    memset(buff,0,MAXSIZE * sizeof(char));

#if defined(NO_IMPLEMENTATION)

    printf("Received the friend request !");
    return NULL;

#else

    ret = m_tcpsocket->Receive(&uint32_t,sizeof(uint32_t)); // 接收请求参数

    if(!ret) return NULL;

    if(flag_buff == FRIEND_REQUEST_AGREE) // 非好友请求
        return NULL;
    else
        m_tcpsocket->Receive(buff,MAXSIZE); // 接收好友名称
    return buff;

#endif

}