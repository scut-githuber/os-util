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

int handle(int fd);//处理来自服务器返回的消息
extern int CreateClientSocket(const char* address,int Port);//创建socket和服务器通信
extern int Send_Client(const char *buff,int fd);//向服务器发送请求
int Receive_Client(char * buff,int fd);//接收来自服务器返回的消息
int handle(int fd);//处理来自服务器返回的消息

#endif //OS_UTIL_CLIENT_H_H
