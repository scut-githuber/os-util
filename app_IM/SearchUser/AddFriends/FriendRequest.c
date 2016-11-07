#include "FriendRequest.h"

// Function Name : SendFriendRequest()
// Input : socket文件描述符以及好友名称
// Output : 无
// Description : 发送好友请求,

void SendFriendRequest(int fd,const char *name)
{
    int ret;

    char *flag = (char *)FRIEND_REQUEST;
    ret = Send_Client(flag,fd);

    ret = Send_Client(name,fd);

    printf("发送好友请求成功\n");

}