#include "sendMessage.h"

// Function name : PostUsrMsg()
// Input:   用户发送的加密内容
// Output:  返回服务器对post请求返回的结果
// Description: 获取服务器对post请求返回的结果

int GetSendRes(int post_res){
    if(post_res<0)
    {
        printf("向服务器发送post消息失败!");
        return SEND_FAIL;
    }
    return SEND_SUCCESS;
}
