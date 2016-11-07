#include "SendRequestResult.h"

// Function Name : SendRequestResult()
// Input: 文件描述符fd,该文件描述符为客户端socket文件的描述符
// Output: 无
// Descripiton : 向服务端发送请求结果

void SendRequestResult(int fd)
{
    char *flag = (char*);
    int ret = Send_Client(); // 向服务器发送请求结果

    if(!ret)                                // 发送失败
        printf("Failed in sending result to server\n");
}