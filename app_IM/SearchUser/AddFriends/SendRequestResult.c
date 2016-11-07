#include "SendRequestResult.h"

// Function Name : SendRequestResult()
// Input: 文件描述符fd,该文件描述符为客户端socket文件的描述符
// Output: 成功返回1 否则返回-1
// Descripiton : 向服务端发送请求结果

int SendRequestResult(int fd)
{
    char *flag = (char*)FRIEND_REQUEST_AGREE;
    int ret = Send_Client(flag,fd); // 向服务器发送请求结果

    if(!ret)                                // 发送失败
        return -1;
    else
        return 1;
}