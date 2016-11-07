#include "UpdateLocalList.h"
#include "../BrowseFriendList/GetFriendList.h"

// Function Name : UpdateLocalList()
// Input : socket文件描述符
// Output : 更新成功返回true,否则返回false
// Description : 客户端更新好友列表

int UpdateLocalList(int fd) // 假设列表中好友以 ","分隔
{
    char *buff = (char*)malloc(MAXSIZE * sizeof(char));
    memset(buff,0,sizeof(char) * MAXSIZE);

    buff = GetFriendList(fd);

    if(buff)
    {
        RemoveList(); // 清除好友列表

        memset(buff,0,sizeof(char) * MAXSIZE);

        Receive_Client(buff,fd);

        int i =0;
        char *pstr = buff;
        char name_buff[MAXSIZE];

        memset(name_buff,0,sizeof(char) * MAXSIZE);

        while(pstr){
            if(*pstr != ',')
                name_buff[i++] = *pstr;
            else
            {
                name_buff[i] = '\0';
                i = 0;
                AddFriend(name_buff);
                memset(name_buff,0,sizeof(char) * MAXSIZE);
            }
            pstr++;
        }
    }
    else
    {
        printf("从服务器获取好友列表失败\n");
        return -1;
    }
}