#include "GetFriendList.h"
#include "SendListRequest.h"

// Function Name : GetFriendList()
// Input : tcp socket 指针,数据长度的引用
// Output: 好友列表
// Description : 从服务端获取最新的好友列表

char *GetFriendList(TcpSoket *m_tcpsocket,int *len)
{
    char buff[MAXSIZE];
    memset(buff,0,MAXSIZE * sizeof(char));

#if defined(NO_IMPLEMENTATION)

    printf("Getting friend List");
    return NULL;

#else

    if(!SendListRequest(m_tcpsocket)) return NULL; // 获取列表请求失败


    bool ret = m_tcpsocket->Receive(buff,MAXSIZE); // 从服务端获取好友列表
    if(!ret)                                        // 获取失败
    {
        printf("Failed in getting friend list");
        return NULL;
    }
    printf("Get friend list Successfully");
    *len = MAXSIZE;
    return buff;

#endif

}