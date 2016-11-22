#include "getMessage.h"

// Function name : ShowMsg()
// Input:  指向接收消息的结构体指针
// Output: 在消息框显示消息
// Description: 在消息框显示消息

    void ResMsg(Rec_Data const *data_src){
    printf("%s",data_src->receivemsg);
}

