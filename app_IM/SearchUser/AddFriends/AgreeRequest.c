
#include "AgreeRequest.h"

// Function Name : AgreeRequest()
// Input : tcp socket指针,好友名称,名称长度
// Output :无
// Descripiton : 同意好友请求

void AgreeRequest(TcpSocket *m_tcpsocket,char *name,int len)
{

#if defined(NO_IMPLEMENTATION)

    printf("Agree friend request \n");

#else

    //将好友添加到本地
    AddFriend(name,len);

    printf("Successfully add friend :%s\n",*name);

    // 向服务端发送请求结果
    SendRequestResult(m_tcpsocket,AGREE_REQUEST,sizeof(uint32_t));

#endif

}
