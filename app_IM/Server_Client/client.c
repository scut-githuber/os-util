


int handle(int fd);

int CreateClientSocket(const char* address,int Port)
{
    int nsd;
    char buf[1024];

    struct sockaddr_in addr;

    printf("欢迎使用: \n");
    nsd = socket(AF_INET,SOCK_STREAM,0);
    memset(&addr,0,sizeof(addr));

    addr.sin_family = AF_INFT;
    addr.sin_port = htons(Port);
    addr.sin_addr.s_addr = inet_addr(address);

    if(connect(nsd,(struct sockaddr *) &addr,sizeof(struct sockaddr)) < 0)
    {
        printf("链接失败\n");
        return -1;
    }

    return 1;
}

int main(void) {


    char *myaddr = "125.216.238.121";
    int Port = 5050;

    if (CreateClientSocket(myaddr, Port) == -1) {
        printf("链接失败\n");
    }


    for (;;) {
        if (handle(nsd) == -1){
            close(nsd);
            return EXIT_SUCCESS;
        }
        else
            close(nsd);
    }
}

int Send_Client(const char *buff,int fd)
{

    for(;;){
        if(strcmp("exit",buff) == 0)
            return 1;
        write(fd,buff,strlen(sendl));
    }
}

int Receive_Client(char * buff,int fd)
{
    int retn;

    for(;;)
    {
        retn = recv(fd,buff,1024,0);
        if(retn > 0 ){
            buff[retn] = 0x00;
            return 1;
        }
    }
}

int handle(int fd) { // 客户端的处理函数


}
