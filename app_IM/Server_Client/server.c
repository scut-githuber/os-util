
#include <stdlib.h>
#include <pthread.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h> /* inet(3) functions */

#include <stdlib.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int handle(int point);

int main(void) {

    int sfd, ind;
    struct sockaddr_in addr;
    struct sockaddr_in clent;
    char resv[1024], sendbuf[1024];
    char buf[1024];
    char * myaddr = "125.216.238.121";

    int ret; // 返回值设置
    socklen_t lent;
    int pid;
    addr.sin_family = AF_INET; //IPv4 Internet protocols

    addr.sin_port = htons(5050); //这里输入服务器端口号

    addr.sin_addr.s_addr = inet_addr(myaddr);
    ; //INADDR_ANY表示本机IP

//获取socket描述符，IPV4asd
    sfd = socket(AF_INET, SOCK_STREAM, 0);

    if (sfd < 0) {
        printf("socket error \n");
        return -1;
    }
    printf("bind start \n");
//将套接子与指定端口链接
    if (bind(sfd, (struct sockaddr *) &addr, sizeof(struct sockaddr)) < 0) {
        printf("bind error \n");
        return -1;
    }

//监听套接子
    if (listen(sfd, 1024) < 0) {
        printf("listen error \n");
        return -1;
    }

    for (;;) {
//接受来自客户端的信息
        printf("开始接收 \n");
        memset(&clent, 0, sizeof(clent));
        lent = sizeof(clent);
        ind = accept(sfd, (struct sockaddr *) &clent, &lent);
        if (ind < 0) {
            printf("接收错误 %d \n", ind);
            return -1;
        }

       
        printf("已经和%s连接 porit %d\n",
               inet_ntop(AF_INET, &clent.sin_addr, buf, sizeof(buf)),
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

int handle(int point) {

    int retn;
    char buf[1024];

    for (;;) {
        retn = read(point, buf, sizeof(buf));
        if (retn < 0) {
            printf("接收信息错误 \n");
            close(point);
            break;
        } else if (retn == 0) {
            printf("客户端退出 \n");
            close(point);
            break;
        }

        printf("来自客户端的信息:%s\n", buf);
        char * sendData = "你好，TCP客户端！\n";
        send(point, sendData, strlen(sendData), 0);
        if (strcmp("exit", buf) == 0) {
            printf("退出 \n");
            close(point);
            return 0;
        }
    }
    return 0;
}
