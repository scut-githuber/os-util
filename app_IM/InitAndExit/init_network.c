#include "init_network.h"

void InitServerUrl()
{
	/*��ʼ����������ַ*/
	
}
void Server()
{
	/*�������������������������Ƿ��ܹ��������ʷ�����*/
	/*
	�ɲο���LinuxAPI
	connect		����Զ������
	send		ͨ��socket������Ϣ
	shutdown	�ر�socket�ϵ�����
	*/
	while (1) {

		mission = get_mission();//��ȡ���ڿͻ�����Ҫ�����綯��

		swtich(mission) {

    case SEND_MSG:
		...; break;//�����ڵĴ�����ʹ��붼������ڽ�ȥ���á�
	case ...:
		...
	default://����ѭ������ɶ��û��
		send_i_liveing();//��������


		}
		sleep();//˯һ�ᣬ��ȻCPU������ռ�ˡ�

	}
}
