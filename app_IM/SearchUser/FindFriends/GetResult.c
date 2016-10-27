#include "Generic.h"

// Function Name: GetResult()
// Input : tcpsocket指针
// Output : 服务器查询结果
// Desription : 返回服务器查询结果

char *GetResult(TcpSocket *m_tcpsocket){
    char *buffer[MAXSIZE];
    memset(buffer,0,MAXSIZE * sizeof(char));
    m_tcpsocket->Receive(buffer,MAXSIZE);
    return buffer;
}