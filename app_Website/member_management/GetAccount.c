#include "membermanagement.h"
// Description : 获取账号
// Output : 账号
char *GetAccount();
{
	char account[ACCOUNT_MAX_LEN];
	printf("请输入账号：")
	for(int i=0;i<ACCOUNT_MAX_LEN;i++)
	{
		if(getchar()=="/n")
			break;
		else
		{
			account[i] = getchar();
		}
	}
	return account
}