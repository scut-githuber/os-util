#include "membermanagement.h"
// Description : 判断账号是否存在
// Input : 会员ID
// Output : 从服务器返回结果信息
exe_result *CheckAccountExist(account)
{
 exe_result a;
 char sql[]="select count(*) from user where account = @account";
 a.signal = ExeSql(sql);
 return a;
}