#include "Generic.h"

// Function Name : SendRequestResult()
// Input: tcp socket指针,请求参数,参数长度
// Output: 无
// Descripiton : 向服务端发送请求结果

void SendRequestResult(TcpSocket *m_tcpsocket,uint32_t nFlag, int len)
{
    bool ret = m_tcpsocket->Send(nFlag,len); // 向服务器发送请求结果

    if(!ret)                                // 发送失败
        printf("Failed in sending result to server\n");
}