
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>    /* inet(3) functions */

int handle(int fd);

int main(void) {

    int nsd;
    char buf[1024];

    char * myaddr = "125.216.238.121";
    struct sockaddr_in addr;

    printf("欢迎使用:\n");
    nsd = socket(AF_INET, SOCK_STREAM, 0);
    memset(&addr,0,sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_port = htons(5050);
    addr.sin_addr.s_addr=inet_addr(myaddr);

    if (connect(nsd, (struct sockaddr *)&addr, sizeof(struct sockaddr)) < 0) {
        printf("和服务器端连接错误! \n");
        return -1;
    }

   
    handle(nsd);
    close(nsd);
    return EXIT_SUCCESS;
}

int handle(int fd) {

    char sendl[1024], rev[1024], recData[1024];

    int retn;

    for (;;) {

        memset(sendl,0,sizeof(sendl));
        memset(rev,0,sizeof(rev));
        if (fgets(sendl, 1024, stdin) == NULL) {
            break;
        }
        write(fd, sendl, strlen(sendl));
        retn = recv(fd, rev, 1024, 0);
        if(retn > 0)
        {
            recData[retn] = 0x00;
            printf("来自服务器端的信息:%s", rev);
        }


    }

    return 0;
}
