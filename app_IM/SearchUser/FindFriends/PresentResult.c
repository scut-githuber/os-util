#include "PresentResult.h"
#include "GetResult.h"

// Function Name : PresentResult()
// Input : socket文件描述符
// Output : 无
// Description : 将查询结果在客户端显示

void PresentResult(int fd)
{
    int ret;

    ret = GetResult(fd);

    if(ret == 1)
    {
        printf("该好友已经存在\n");
    }
    else
    {
        printf("该好友不存在\n");
    }
}