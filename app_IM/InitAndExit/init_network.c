#include "init_network.h"

void InitServerUrl()
{
	/*初始化服务器地址*/
	
}
void Server()
{
	/*发送心跳包给服务器，测试是否能够正常访问服务器*/
	/*
	可参考的LinuxAPI
	connect		连接远程主机
	send		通过socket发送信息
	shutdown	关闭socket上的连接
	*/
	while (1) {

		mission = get_mission();//获取现在客户端需要的网络动作

		swtich(mission) {

    case SEND_MSG:
		...; break;//你现在的打包发送代码都在这个口进去调用。
	case ...:
		...
	default://本此循环发现啥事没做
		send_i_liveing();//发送心跳


		}
		sleep();//睡一会，不然CPU都给你占了。

	}
}
