#include "UpdateLocalList.h"

// Function Name : UpdateLocalList()
// Input : 无
// Output : 更新成功返回true,否则返回false
// Description : 客户端更新好友列表

bool UpdateLocalList() // 假设列表中好友以 ","分隔
{
    char *buff; char *ptr;char tmp_buff[MAXSIZE];
    memset(tmp_buff,0,MAXSIZE * sizeof(char));
    int len;
    int i = 0;

#if defined(NO_IMPLEMENTATION)

    printf("Local friend list has been updated");
    return true;

#else

    buff = GetFriendList(m_tcpsocket,&len); //获取最新的好友列表
    if(buff) return false; // 获取失败


    RemoveList(); // 清除好友列表


    ptr = buff;

    while(ptr++) // 提取列表中好友名称,并添加进新好友列表
    {
        if(*ptr == ','){
            tmp_buff[i] = '\0';
            AddFriend(tmp_buff); // 添加好友
            i = 0;
        }
        else
            tmp_buff[i++] = *ptr;
    }


#endif

}