#include "classify.h"
#import "ClassifyService"

// Function name : addRequest()
// Input : 用户ID
// Output : 请求结果
// Description : 请求新增分类

bool addRequest(char * const userID){
	char res = FALSE;
	if(userID != null){		
		ClassifyService classifyService = ClassifyService::getClassifyService();
		res = classifyService.addRequest(userID);
	}
	return(res);
}


// Function name : pop()
// Input : null
// Output : 弹窗请求结果
// Description : 跳出弹窗请求

bool pop(){
	char res = FALSE;
	if(userID != null){		
		ClassifyService classifyService = ClassifyService::getClassifyService();
		res = classifyService.pop();
	}
	return(res);
}


// Function name : addClass()
// Input : 用户ID，音乐分类
// Output : 增加分类结果
// Description : 增加歌曲分类

bool addClass(char * const userID, Music_Class *const musicClass){
	char res = FALSE;
	if(userID != null){		
		ClassifyService classifyService = ClassifyService::getClassifyService();
		res = classifyService.addclass(userID,musicClass);
	}
	return(res);


// Function name : updateList()
// Input : 用户ID
// Output : 返回分类列表
// Description : 更新用户分类列表

ClassList update(char * const userID){
	if(userID  != null){
		ClassifyService classifyService = ClassifyService::getClassifyService(); 
		Music_Class resList[CLASS_LIST_MAX_LENGTH] = classifyService.updateList(userID);
		CLassList class_list;
		class_list -> userID = userID;
		class_list -> userClassList = resList;
		class_list -> result = TRUE;
	}
	else{
		class_list -> userID = null;
		class_list -> userClassList = null;
		class_list -> result = FALSE;
	}
	return(class_list);
}