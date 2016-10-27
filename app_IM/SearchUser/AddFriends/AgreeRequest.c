#include "Generic.h"

// Function Name : AgreeRequest()
// Input : tcp socket指针,好友名称,名称长度
// Output :无
// Descripiton : 同意好友请求

void AgreeRequest(TcpSocket *m_tcpsocket,char *name,int len)
{
    AddFriend(name,len); //将好友添加到本地
    printf("Successfully add friend :%s\n",name);

    SendRequestResult(m_tcpsocket,AGREE_REQUEST,sizeof(uint32_t)); // 向服务端发送请求结果

}