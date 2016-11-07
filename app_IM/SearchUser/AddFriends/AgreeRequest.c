#include "AgreeRequest.h"
#include "SendRequestResult.h"

// Function Name : AgreeRequest()
// Input : 好友名称
// Output :无
// Descripiton : 同意好友请求

void AgreeRequest(const char *name,int fd)
{
    int ret;
    //将好友添加到本地
    ret = AddFriend(name);
    if(!ret)
    {
        printf("添加好友失败\n");
    }
    else
        printf("添加好友成功\n");

    // 向服务端发送请求结果
    ret = SendRequestResult(fd);
    if(ret == -1)
        printf("向服务器发送同意请求失败\n");
}
