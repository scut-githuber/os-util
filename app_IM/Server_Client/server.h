//
// Created by cxc123 on 16-11-7.
//

#ifndef OS_UTIL_SERVER_H_H
#define OS_UTIL_SERVER_H_H

#include <stdlib.h>
#include <pthread.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>   // inet(3) functions

#include <stdlib.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "../Generic.h"

int handle(int point);
int CreateServerSocket(const char *address,int Port);
int SocketBind(int sfd);
int SocketListen(int sfd);
extern int Receive_Server(char *buff,int fd);
extern int Send_Server(const char *buff,int fd);
int handle(int point);

#endif //OS_UTIL_SERVER_H_H
