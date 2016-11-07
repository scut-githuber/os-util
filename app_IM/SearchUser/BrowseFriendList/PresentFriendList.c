#include "PresentFriendList.h"

// Function Name : PresentFriendList()
// Input : 无
// Output :无
// Description : 客户端显示好友列表

void PresentFriendList()
{
    char buff[MAXSIZE];
    printf("输出好友列表: \n");
    memset(buff,0,sizeof(char) * MAXSIZE);

    for(int i=0;i<GetFriendNum();i++) //输出好友名称
    {
        buff = GetFriend(i);
        printf("%s\n",buff);
    }

}