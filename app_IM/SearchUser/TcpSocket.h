
#ifndef OS_UTIL_TCPSOCKET_H
#define OS_UTIL_TCPSOCKET_H

typedef int bool;
#define true 1
#define false 0

struct TcpSocket
{

    bool Send(char *buff,int len);
    bool Receive(char *buff,int len);

};

typedef struct TcpSocket TcpSocket;
#endif //OS_UTIL_TCPSOCKET_H