#include "classify.h"
#import "ClassifyService"

// Function name : addRequest()
// Input : �û�ID
// Output : ������
// Description : ������������

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
// Output : ����������
// Description : ������������

bool pop(){
	char res = FALSE;
	if(userID != null){		
		ClassifyService classifyService = ClassifyService::getClassifyService();
		res = classifyService.pop();
	}
	return(res);
}


// Function name : addClass()
// Input : �û�ID�����ַ���
// Output : ���ӷ�����
// Description : ���Ӹ�������

bool addClass(char * const userID, Music_Class *const musicClass){
	char res = FALSE;
	if(userID != null){		
		ClassifyService classifyService = ClassifyService::getClassifyService();
		res = classifyService.addclass(userID,musicClass);
	}
	return(res);


// Function name : updateList()
// Input : �û�ID
// Output : ���ط����б�
// Description : �����û������б�

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