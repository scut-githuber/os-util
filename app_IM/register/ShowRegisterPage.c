#include "register.h"
//Function name : ShowRegisterPage()
//Input : 无
//Output :用户注册欢迎界面
//Description : 显示用户注册界面

int ShowRegisterPage(){
	char str_welcome[]="Welcome to sign up your account!";
	int text_width=strlen(str_welcome),margin_w=2,margin_h=5;
	int top_len=text_width+margin_w*2-2;

	printf("%s", "+");
	for(int i=0;i<top_len;i++)
		printf("%s","-");
	printf("%s\n", "+");

	for(int i=0;i<margin_h-1;i++){
		printf("%s", "|");
		for(int j=0;j<top_len;j++)
			printf("%s"," ");
		printf("%s\n", "|");
	}

	printf("%s", "|");
	for(int i=0;i<margin_w-1;i++)
			printf("%s"," ");
	printf("%s",str_welcome);
	for(int i=0;i<margin_w-1;i++)
			printf("%s"," ");
	printf("%s\n", "|");

	for(int i=0;i<margin_h-1;i++){
		printf("%s", "|");
		for(int j=0;j<top_len;j++)
			printf("%s"," ");
		printf("%s\n", "|");
	}

	printf("%s", "+");
	for(int i=0;i<top_len;i++)
		printf("%s","-");
	printf("%s\n", "+");	
	
}
// int main(){
// 	ShowRegisterPage();
// }
