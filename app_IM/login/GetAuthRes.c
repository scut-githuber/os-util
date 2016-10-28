#include "login.h"
//Function name : GetAuthRes()
//Input : 向服务post用户登录信息后返回的是否成功的标识0/-1
//Output :服务器返回的结果
//Description : 获取用户登录成功与否的结果
char *GetAuthRes(int post_res){
  char res[100];
  if(post_res<0){
    println("%s\n","向服务器POST发送信息失败");  
    exit(0);
  }
  return res;
}
