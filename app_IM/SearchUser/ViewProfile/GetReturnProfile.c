#include "Generic.h"

// Function Name : GetReturnProfile()
// Input : tcp socket 指针,数据长度的引用
// Output : 好友资料
// Description : 客户端获取服务器返回的结果


char *GetReturnProfile(TcpSoket *m_tcpsocket,int *len)
{
    char buff[MAXSIZE];
    memset(buff,0,MAXSIZE * sizeof(char));

#if defined(NO_IMPLEMENTATION)

    printf("Getting friend profile");
    return NULL;

#else

    bool ret = m_tcpsocket->Receive(buff,MAXSIZE); // 从服务端获取好友资料
    if(!ret)                                        // 获取失败
    {
        printf("Failed in getting friend profile");
        return NULL;
    }
    printf("Get friend profile Successfully");
    *len = MAXSIZE;
    return buff;

#endif

}