//File name : add_history.h
//Description :  添加用户音乐播放记录
#ifndef ADD_HISTORY_H
#define ADD_HISTORY_H
 
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
 				                             
extern History *GetHistoryInfo(int argc, char const *argv[]);				 
             
extern int PlayMusic(History *history);	

extern int AddHistory(History *history);   
            
extern int RefreshHistory();

extern int ShowHistoryPage();					                                

#endif