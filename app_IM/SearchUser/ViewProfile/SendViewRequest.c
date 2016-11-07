#include "SendViewRequest.h"

// Function Name : SendViewRequest()
// Input: 文件描述符fd
// Output: 成功返回1 否则返回-1
// Descripiton : 向服务端发送删除好友请求

int SendViewRequest(int fd)
{
    char *flag = (char*)PROFILE_REQUEST_AGREE;
    int ret = Send_Client(flag,fd); // 向服务器发送查看好友资料请求

    if(!ret)                                // 发送失败
        return -1;
    else
        return 1;
}