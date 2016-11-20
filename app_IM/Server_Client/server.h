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

int handle(int point);//处理从客户端发送来的请求
int CreateServerSocket(const char *address,int Port);//创建socket通信
int SocketBind(int sfd);//绑定服务器地址
int SocketListen(int sfd);//监听来自不同客户端是否有发送请求
extern int Receive_Server(char *buff,int fd);//接收来自客户端的消息
extern int Send_Server(const char *buff,int fd);//相应客户端的请求
int handle(int point);//处理从客户端发送来的请求

#endif //OS_UTIL_SERVER_H_H
