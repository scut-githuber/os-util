#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/**
 * 调用京东API示例；
 */


typedef struct good_profile{

//系统级别输入参数
string access_token;  //采用OAuth授权方式为必填参数
string app_key;       //应用的app_key
string sign;          //签名
string timestamp;     //时间戳，格式为yyyy-MM-dd HH:mm:ss

//应用级别输入参数
string ware_id;       //商品的id 
string page;          //分页 
string pagesize;      //每页多少条 
string trade_no;      //流水号（无实际意义，不重复即可） 

//返回结果
string code;            //0为正常，其它值参见错误代码一览表  
string modified;        //更改时间
warepropimg[] propimgs; //图片信息  
number total;           //图片信息数量  

}good_PROFILE
