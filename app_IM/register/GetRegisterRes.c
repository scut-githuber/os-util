#include "register.h"

// Function name : GetRegisterRes()
// Input : 用户注册信息是否发送成功
// Output : 从服务器返回的注册结果信息
// Description : 获取从服务返回的注册结果信息
char *GetRegisterRes(int post_res){
	char res[100];
	if(post_res<0){
	println("%s\n","向服务器POST发送信息失败");  
	exit(0);
	}
	return res;
}
