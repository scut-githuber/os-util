#include <string.h>
// Function name : Encode(char prim[])
// Input :   password decode
// Output :  password encode
// Description : 加密用户输入的密码
char *Encode(char const *prim) {
    int i,n,len;
    char code[100];
    char temp_char,trans_char;
    int temp_num,trans_num;
    len = strlen(prim);

    for(i = 0;i < len;i++) {
        temp_char = prim[i]; 
        if (temp_char <='9' && temp_char >='0'){
            trans_char = temp_char;             
        }        
        else {
	       	if (temp_char <= 'z' && temp_char >= 'a')
	            temp_num = temp_char - 'a' + 1;
	        else if (temp_char <= 'Z' && temp_char >= 'A')
	            temp_num = temp_char - 'A' + 27;

	        trans_num = temp_num*3 % 52;

	        if (trans_num > 26 && trans_num <= 52)         
	            trans_char = 'A' + trans_num - 27;
	        else if (trans_num > 0 && trans_num <= 26)
	            trans_char = 'a' + trans_num - 1;
        }
        code[i] = trans_char;
    }
    code[len] = '\0';
    char *re=code;
    return re;
}