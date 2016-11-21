//File name : search.h
//Description : 关于搜索功能的函数定义
#ifndef PLAYER_SEARCH_H
#define PLAYER_SEARCH_H

//搜索字符串 最大长度
#define SEARCH_STRING_MAX_SIZE 100	
//歌曲ID 最大长度
#define MUSIC_ID_SIZE 64	
//歌曲名称 最大长度
#define MUSIC_NAME_MAX_SIZE 32	
//歌曲演唱者 最大长度
#define MUSIC_Singer_MAX_SIZE 16	
//歌曲作者 最大长度
#define MUSIC_AUTHOR_MAX_SIZE 16	
//歌词 最大长度
#define MUSIC_LYRIC_MAX_SIZE 1024
//歌曲列表 最大歌曲数目	
#define MUSIC_LIST_MAX_SIZE 100	


/**
 * include head file
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


/**
 * declare struct in search modules
 */
 
//定义存储搜索信息的结构
typedef struct search_info{
	char searvhInfo[SEARCH_STRING_MAX_SIZE]; 
}Info;

//定义返回歌曲信息结构
typedef struct music{
	char *musicID[MUSIC_ID_SIZE];
	char *musicName[MUSIC_NAME_MAX_SIZE];
	char *musicSinger[MUSIC_Singer_MAX_SIZE];
	char *musicAuthor[MUSIC_AUTHOR_MAX_SIZE];
	char *musicLyric[MUSIC_LYRIC_MAX_SIZE];
	int musicLength;
	int musicStyle;
}Music;

//定义存储搜索结果信息的结构
typedef struct search_res{
	Info info;
	Music *musicList[MUSIC_LIST_MAX_SIZE];
	bool result;
}Search_Res;


/**
 * declare function 
 */
extern Search_Res searchByName();			  //根据歌名搜索
extern Search_Res searchBySinger();             //根据歌手搜索
extern Search_Res searchByLyric();             //根据歌词搜索

#endif

