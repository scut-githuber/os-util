#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/**
 * 调用京东API；
 */


typedef struct order_profile{

//系统级别输入参数
string access_token;  //采用OAuth授权方式为必填参数
string app_key;       //应用的app_key
string sign;          //签名
string timestamp;     //时间戳，格式为yyyy-MM-dd HH:mm:ss

//应用级别输入参数
string order_id;       //订单的id 

}order_PROFILE
