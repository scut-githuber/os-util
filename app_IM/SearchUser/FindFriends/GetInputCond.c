#include "GetInputCond.h"

// Function name : GetInputCondi()
// Input:   从键盘输入查询信息
// Output:  包含查询信息的字符串
// Description:从输入框获取用户输入的查询条件(暂时用命令行代替输入框)

char *GetInputCondi()
{
    char *buffer = (char*)malloc(sizeof(char) * MAXSIZE);
    memset(buffer,0,MAXSIZE * sizeof(char));
    printf("Please Input Search conditions \n");
    scanf("%s",buffer);
    return buffer;
}