#include "GetResult.h"

// Function Name: GetResult()
// Input : socket文件描述符
// Output : 查询结果,存在返回1,不存在返回-1
// Desription : 返回服务器好友查询结果

int GetResult(int fd)
{
    char *flag = FIND_FRIEND;
    char *buff = (char*)malloc(sizeof(char) * MAXSIZE);

    Send_Client(flag,fd);

    Receive_Client(buff,fd);

    if(strcmp(buff,FRIEND_ALREADY_EXIST) == 0)
        return 1;
    else
        return -1;
}