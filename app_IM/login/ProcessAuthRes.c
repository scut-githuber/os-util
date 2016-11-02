#include "login"

//Function name : ProcessAuthRes()
//Input : 返回登录结果结构LOGIN_RES指针
//Output : 在控制台打印成功或者失败信息，返回登录成功与否标志
//Description : 处理用户登录结果 
int ProcessAuthRes(LOGIN_RES const *login_res){
  int flag=login_res->login_flag;
  char *username=login_res->auth.username;

  if(flag==LOGIN_SUCCESS){
    println("Welcome %s!\n",username);
  }else if(flag==LOGIN_FAIL_USR){
    println("Login fail %s 用户名不存在\n",username);
  }else if(flag==LOGIN_FAIL_PWD){
    println("Login fail 输入的密码错误\n");
  }
  return flag;
}
