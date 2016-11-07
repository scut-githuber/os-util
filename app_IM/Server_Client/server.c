
#include <stdlib.h>
#include <pthread.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>   // inet(3) functions

#include <stdlib.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "../Generic.h"

int handle(int point);

int CreateServerSocket(const char *address,int Port)
{
    int sfd, ind;
    struct sockaddr_in addr;

    int ret; // 返回值设置
    int pid;
    addr.sin_family = AF_INET; //IPv4 Internet protocols

    addr.sin_port = htons(Port); //这里输入服务器端口号

    addr.sin_addr.s_addr = inet_addr(address);
    ; //INADDR_ANY表示本机IP

    //获取socket描述符，IPV4asd
    sfd = socket(AF_INET, SOCK_STREAM, 0);

    if (sfd < 0) {
        printf("socket error \n");
        return -1;
    }
    else
        return sfd;
}

int SocketBind(int sfd)
{
    if(sfd < 0 )
    {
        printf("socket error \n");
        return -1;
    }

    printf("bind start \n");

    if(bind(sfd,(struct sockaddr *) &addr, sizeof(struct sockaddr)) < 0)
    {
        printf("bind error \n");
        return -1;
    }

    return 1;
}

int SocketListen(int sfd)
{
    if(sfd < 0 )
    {
        printf("socket error\n");
        return -1;
    }

    if(listen(sfd,1024) < 0)
    {
        printf("listen error \n");
        return -1;
    }

    return 1;
}

int Receive_Server(char *buff,int fd)
{

    int retn;

    if(fd < 0 )
        return -1;
    for(;;)
    {
        retn = read(fd, buff, sizeof(buf));
        if(retn < 0)
        {
            printf("接收信息错误\n");
            close(fd);
            return -1;
        }
        else if(retn == 0)
        {
            printf("客户端退出\n");
            close(fd);
            return 1;
        }
    }
}

int Send_Server(const char *buff,int fd) {
    for(;;) {
        send(fd,buff,strlen(buff),0);
        if(strcmp("exit",buff) == 0) {
            printf("发送结束\n");
            close(fd);
            return 1;
        }
    }
}

int main(void) {

    char *myaddr = "125.216.238.121";
    int Port = 5050;
    struct sockaddr_in client;
    char resv[1024], sendbuf[1024];
    char buf[1024];
    socklen_t lent;
    int sfd = CreateServerSocket(myaddr,Port);
    if (sfd < 0)
        return -1;

    if(SocketBind(sfd) == -1)
        return -1;

    if(SocketListen(sfd) == -1)
        return -1;

    for (;;) {
//接受来自客户端的信息
        printf("开始接收 \n");
        memset(&client, 0, sizeof(client));
        lent = sizeof(client);
        ind = accept(sfd, (struct sockaddr *) &client, &lent);
        if (ind < 0) {
            printf("链接失败 %d \n", ind);
            return -1;
        }

        printf("已经和%s连接 porit %d\n",
               inet_ntop(AF_INET, &client.sin_addr, buf, sizeof(buf)),
               ntohs(clent.sin_port));

        pid = fork();

        if (pid == 0) {
//子进程
            close(sfd);
            handle(ind);
        } else if (pid < 0) {
//error
            close(ind);
        } else {
//父进程
        }
    }

    return EXIT_SUCCESS;
}

int handle(int point) { // 服务器处理函数

    char buf[1024];

    if(Receive_Server(buf,point) == 1)
        printf("成功接收客户端信息");

    char * sendData = "你好，TCP客户端！\n";
    Send_Server(sendData,point);
    return 0;
}
