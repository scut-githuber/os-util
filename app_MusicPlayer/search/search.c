#include "search.h"
#import "SearchService"
// Function name : searchMusicByName()
// Input : 搜索的歌曲名称
// Output : 返回歌曲列表
// Description : 根据歌曲名称搜索歌曲

Search_res searchMusicByName(Info const *searchInfo){
	if(searchInfo != null){		
		SearchService searchService = SearchService::getSearchService(); 
		Music resList[MUSIC_LIST_MAX_SIZE] = searchService.searchByName(info);
		Search_Res search_res;
		search_res -> info = searchInfo;
		search_res -> musicList = resList;
		search_res -> result = TRUE;
	}
	else{
		search_res -> info = null;
		search_res -> musicList = null;
		search_res -> result = FLASE;
	}
	return(search_res);
}


// Function name : searchMusicBySinger()
// Input : 搜索的歌手
// Output : 返回歌曲列表
// Description : 根据歌手搜索歌曲

Search_res searchMusicBySinger(Info const *searchInfo){
	if(searchInfo != null){		
		SearchService searchService = SearchService::getSearchService(); 
		Music resList[MUSIC_LIST_MAX_SIZE] = searchService.searchBySinger(info);
		Search_Res search_res;
		search_res -> info = searchInfo;
		search_res -> musicList = resList;
	}
	else{
		search_res -> info = null;
		search_res -> musicList = null;
		search_res -> result = FLASE;
	}
	return(search_res);
}


// Function name : searchMusicByLyric()
// Input : 搜索的歌词
// Output : 返回歌曲列表
// Description : 根据歌词搜索歌曲

Search_res searchMusicByName(Info const *searchInfo){
	if(searchInfo != null){
		SearchService searchService = SearchService::getSearchService(); 
		Music resList[MUSIC_LIST_MAX_SIZE] = searchService.searchByLyric(info);
		Search_Res search_res;
		search_res -> info = searchInfo;
		search_res -> musicList = resList;
	}
	else{
		search_res -> info = null;
		search_res -> musicList = null;
		search_res -> result = FLASE;
	}
	return(search_res);
}