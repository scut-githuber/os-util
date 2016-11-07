#include "GetReturnProfile.h"

// Function Name : GetReturnProfile()
// Input : 文件描述符fd
// Output: 好友资料字符串指针,若接受失败则返回NULL指针
// Description : 客户端获取服务器返回的好友资料

char *GetReturnProfile(int fd)
{
    char *buff = (char*)malloc(MAXSIZE * sizeof(char)); // 分配缓冲区

    memset(buff,0,MAXSIZE * sizeof(char));

    if(Receive_Client(buff,fd))
    {
        printf("Get Friend Profile Successfully");
        return buff;
    }

    else
        return buff;
}