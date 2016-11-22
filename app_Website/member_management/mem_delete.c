#include "membermanagement.h"
// Description : 删除会员
mem_delete()
{
	int sentsignal;
	int existsignal;
	char sql[];
	exe_result a
	account = *GetAccount();
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
	GetResult(exe_result *result);
	sql="select count(*) from user where account = @account"
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