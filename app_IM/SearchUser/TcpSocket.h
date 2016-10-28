

typedef int bool;
#define true 1
#define false 0

typedef struct TcpSocket
{

    bool Send(char *buff,int len);
    bool Receive(char *buff,int len);
}TcpSocket;