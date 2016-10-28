#include "login"
//Function name : ProcessAuthRes
//Input : 是否登录成功的标志LOGIN_SUCCESS 0；LOGIN_FALI -1
//Output : 在控制台打印成功或者失败信息，返回登录成功与否标志
int ProcessAuthRes(LOGIN_RES const *login_res){
  int flag=login_res->login_flag;
  char *username=login_res->auth.username;
  if(flag==LOGIN_SUCCESS){
    println("Welcome %s!\n",username);
  }else if(flag==LOGIN_FAIL_USR){
    println("Login fail %s 用户名不存在\n",username);
  }else{
    println("Login fail 输入的密码错误\n");
  }
  return flag;
}
