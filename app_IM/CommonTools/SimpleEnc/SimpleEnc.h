//Filename : SimpleEnc.h
//Description : c 简单的加密 解密算法
#ifndef OS_UTIL_SIMPLEENC_H
#define OS_UTIL_SIMPLEENC_H
#include <stdio.h>
#include <string.h>
char *Encode(char const *prim);
char *Decode(char const *code);
#endif