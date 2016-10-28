#ifndef OS_UTIL_GENERIC_H
#define OS_UTIL_GENERIC_H
#include "../Generic.h"
#endif // OS_UTIL_GENERIC_H

#ifndef OS_UTIL_TCPSOCKET_H
#define OS_UTIL_TCPSOCKET_H

#include "../TcpSocket.h"

#endif // OS_UTIL_TCPSOCKET_H

#ifndef OS_UTIL_FRIENDREQUEST_H
#define OS_UTIL_FRIENDREQUEST_H

extern void SendFriendRequest(TcpSocket *m_tcpsocket,char *name,int len,uint32_t nFlag);

#endif  //OS_UTIL_FRIENDREQUEST_H

