#include "login.h"
// Function Name : CheckLoginInfo()
// Input : �û���¼��ϢAuth�ṹָ��
// Output: �Ƿ���Ե�¼�ɹ����ź�
// Descripiton : ����¼��Ϣ�Ƿ���ȷ

int CheckLoginInfo(Auth const *auth){
	//��ȡ�������û���Ϣ�б�ServerUserList
	int index = ServerUserList.GetUserIndex(auth->username);
    if (index > -1){
		char *pwd = ServerUserList.GetUser(index)->password;
		if (pwd == auth->password){
			return LOGIN_SUCCESS;
		}
		else{
			printf("Password is wrong.\n");
			return LOGIN_PWD_FAILURE;
		}
	}
	else{
		printf("Username doesn't exist.\n");
		return LOGIN_USER_FAILURE;
	}

}
