//File name : delete_all.h
//Description :  清空播放记录
#ifndef DELETE_ALL_H
#define DELETE_ALL_H
 
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

extern History *GetAllHistory(int[] &ids);
 
extern int DeleteHistory(History *history);   
        
extern int DeleteAllHistory(History[] *history); 

extern int RefreshHistory();

extern int ShowHistoryPage();                                         

#endif