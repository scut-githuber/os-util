//Filename : enc.h
//Description : c简单的加密解密算法
#ifndef PLAYER_ENC_H
#define PLAYER_ENC_H
#include <stdio.h>
#include <string.h>
extern char *Encode(char const *prim);     //简单的加密字符串方法
extern char *Decode(char const *code);     //简单的解密字符串方法
#endif