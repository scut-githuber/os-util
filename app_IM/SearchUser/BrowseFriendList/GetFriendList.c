#include "GetFriendList.h"
#include "SendListRequest.h"

// Function Name : GetFriendList()
// Input : socket文件描述符
// Output: 若成功返回好友列表字符串指针,若失败返回NULL指针
// Description : 从服务端获取最新的好友列表

char *GetFriendList(int fd)
{
    char *buff = (char*)malloc(MAXSIZE * sizeof(char));
    memset(buff,0,sizeof(char) * MAXSIZE);

    SendListRequest(fd);

    Receive_Client(buff,fd);

    if(strcmp(buff,LIST_REQUEST_AGREE) != 0)
    {
        printf("获取好友列表失败\n");
        return NULL;
    }

    memset(buff,0,sizeof(char) * MAXSIZE);

    Receive_Client(buff,fd);

    return buff;
}