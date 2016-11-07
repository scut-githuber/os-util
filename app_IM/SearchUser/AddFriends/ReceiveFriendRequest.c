#include "ReceiveFriendRequest.h"

// Function Name : ReceiveFriendRequest()
// Input : socket文件描述符
// Output: 好友名称字符串指针,若接受失败则返回NULL指针
// Description : 接收来自服务器转发的好友请求

char *ReceiveFriendRequest(int fd)
{
    char *buff = (char*)malloc(MAXSIZE * sizeof(char)); // 分配缓冲区接收好友名称

    memset(buff,0,MAXSIZE * sizeof(char));
    int count = 0;

    while(count++ < 30) { // 接收30次,若30次还没有接收到好友请求flag则返回NULL
        Receive_Client(buff,fd);
        if(strcmp(buff,FRIEND_REQUEST) == 0)
            break;
    }

    if(count >= 30)
    {
        printf("接收好友请求失败\n");
        return NULL;
    }

    memset(buff,0,sizeof(char) * MAXSIZE);

    Receive_Client(buff,fd);

    return buff;
}