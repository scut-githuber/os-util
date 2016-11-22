#include "membermanagement.h"
// Description : 修改会员积分
mem_add()
{
	int sentsignal;
	int existsignal;
	account = *GetAccount();
	int score;
	exe_result a
	char sql[];
	printf("请输入修改后的积分")；
	scanf("%d",&score);
	sentsignal = SendAccountMsg(account);
	if(sentsignal != SEND_OK)
	{
		printf("传输错误");
		exit(0);
	}
	existsignal = CheckAccountExist(account);
	if(existsignal != 1)
	{
		printf("该账号不存在");
		exit(0);
	}
	sql ="update user set values(score = @score) where account = @account";
	a = ExeSql(sql);
	if(a.signal!=1)
	{
		printf("查询失败");
	}
	else
	{
		puts(a->result);
	}
}
