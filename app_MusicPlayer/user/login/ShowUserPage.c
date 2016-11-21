#include "login.h"
//Function name : ShowUserPage()
//Description : 显示用户登录成功的界面

int ShowUserPage(char const *username){
	char str_welcome[]="Hello " + username + "! Welcome to login in.";
	int text_len=strlen(str_welcome),margin_w=2,margin_h=2;
	int top_len=text_len+margin_w*2-2;

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

	//各种功能选择
	
}