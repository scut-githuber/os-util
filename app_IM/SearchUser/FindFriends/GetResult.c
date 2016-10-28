#include "GetResult.h"

// Function Name: GetResult()
// Input : tcpsocket指针
// Output : 服务器查询结果
// Desription : 返回服务器查询结果

char *GetResult(TcpSocket *m_tcpsocket){
    char *buffer[MAXSIZE];
    memset(buffer,0,MAXSIZE * sizeof(char));

#if defined(NO_IMPLEMENTATION)

    printf("Getting the result from server");
    return NULL;

#else

    bool ret = m_tcpsocket->Send(FRIEND_REQUEST,sizeof(uint32_t)); //发送请求
    if(!ret) return NULL;

    ret = m_tcpsocket->Receive(buffer,MAXISIZE);

    return buffer;

#endif

}