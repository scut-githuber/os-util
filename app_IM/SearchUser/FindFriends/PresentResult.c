#include "Generic.h"

// Function Name : PresentResult()
// Input : 查询结果
// Output : 无
// Description : 将查询结果在客户端显示

void PresentResult(char *result) // 假设不同查询结果用,分隔
{
    char *ptr = result;
    char buff[MAXSIZE];
    memset(buff,0,MAXSIZE * sizeof(char)); // 初始化buff为0,buff用来缓存每个查询结果
    int i = 0;

    while(ptr++){
        if(*ptr == ',')
        {
            buff[i] = '\0';
            DisplayResult(buff);
            i = 0;
        }
        else
            buff[i++] = *ptr;
    }

}


// Function Name : DisplayReulst()
// Input : 将要在客户端上显示的字符串
// Output :无
// Description: 将数据在客户端上显示

void DisplayResult(char *buff)
{
    char *ptr = buff;

    while(ptr++){
       printf("%c",*ptr);
    }

    printf("\n");
}