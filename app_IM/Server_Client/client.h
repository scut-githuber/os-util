//
// Created by cxc123 on 16-11-7.
//

#ifndef OS_UTIL_CLIENT_H_H
#define OS_UTIL_CLIENT_H_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>    /* inet(3) functions */
#include "../Generic.h"

int handle(int fd);
extern int CreateClientSocket(const char* address,int Port);
extern int Send_Client(const char *buff,int fd);
int Receive_Client(char * buff,int fd);
int handle(int fd);

#endif //OS_UTIL_CLIENT_H_H
