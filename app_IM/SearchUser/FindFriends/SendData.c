#include "SendData.h"

// Function Name : SendData()
// Input :所发送的数据指针,大小,以及指向TCP socket类的指针
// Output: 发送成功返回true,否则返回false
// Description : 向服务端发送数据

bool SendData(TcpSocket *m_tcpsocket,char *data_buffer,int len)
{

#if defined(NO_IMPLEMENTATION)

    printf("Sending data to the server \n");
    return true;

#else

    bool ret = m_tcpsocket->Send(nFlag,len); // 向服务器发送请求结果

    if(!ret)                                // 发送失败
        printf("Failed in sending result to server\n");

#endif

    bool ret = m_tcpsocket->Send(data_buffer,len);
    if(ret)
    {
        printf("Data has been successfully sent\n");
    }
    else
    {
        printf("Failed in sending data\n");
    }

}
