//File name : add_history.h
//Description :  添加用户音乐播放记录
#ifndef DELETE_H
#define DELETE_H
 
/**
 * include head file
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/**
 * declare struct in register modules
 */

typedef struct history_info{
  char musicName[USER_NAME_MAX_LENGTH];
  char songer[USER_NAME_MAX_LENGTH];
  int  id; 
}History;

/**
 * declare function 
 */
                                                        
extern History GetHistoryById(int id)
 
extern int DeleteHistory(History *history);   
            
extern int RefreshHistory();

extern int ShowHistoryPage();                                         

#endif