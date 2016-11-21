#include "register.h"
// Function Name : CheckRegister()
// Input : �û�ע����ϢRegister�ṹָ��
// Output :�Ƿ����ע��ɹ����ź�
// Descripiton : ���ע����Ϣ�Ƿ��ظ�

int CheckRegister(Register const *regis){
	//��ȡ�������û���Ϣ�б�ServerUserList
    if (ServerUserList.usernameList.contains(regis->username)){
		return REGISTER_USERNAME_FAILURE;
	}
	if (ServerUserList.nicknameList.contains(regis->nickname)){
		return REGISTER_NICKNAME_FAILURE;
	}
	//��regis�û�ע����Ϣ�ϴ�������
	ServerUserList.insert(regis)

	return REGISTER_SUCCESS;
}
