//File name : user_register.h
//Description : 用户注册的数据结构、函数和宏定义

/**
 * include head file
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/**
 * declare define
 */
#define SEND_OK 1; 		        //向服务器发送信息成功
#define SEND_ERROR -1; 		    //向服务器发送信息失败
#define DELETE_SUCCESS 1 	    //会员删除成功
#define DELETE_FAILURE -1 	    //会员删除失败
#define ADD_SUCCESS 1 	        //会员添加成功
#define ADD_FAILURE -1 	        //会员添加失败
#define ACCOUNT_MAX_LEN 26


/**
 * declare struct in register modules
 */
typedef struct st_mysql {
 NET           net;            /* Communication parameters */
 gptr          connector_fd;   /* ConnectorFd for SSL */
 char          *host,*user,*passwd,*unix_socket,
                *server_version,*host_info,*info,*db;
 unsigned int port,client_flag,server_capabilities;
 unsigned int protocol_version;
 unsigned int field_count;
 unsigned int server_status;
 unsigned long thread_id;      /* Id for connection in server */
 my_ulonglong affected_rows;
 my_ulonglong insert_id;       /* id if insert on table with NEXTNR */
 my_ulonglong extra_info;              /* Used by mysqlshow */
 unsigned long packet_length;
 enum mysql_status status;
 MYSQL_FIELD   *fields;
 MEM_ROOT      field_alloc;
 my_bool       free_me;        /* If free in mysql_close */
 my_bool       reconnect;      /* set to 1 if automatic reconnect */
 struct st_mysql_options options;
 char          scramble_buff[9];
 struct charset_info_st *charset;
 unsigned int server_language;
} MYSQL;

typedef struct st_mysql_res {
 my_ulonglong row_count;
 unsigned int field_count, current_field;
 MYSQL_FIELD   *fields;
 MYSQL_DATA    *data;
 MYSQL_ROWS    *data_cursor;
 MEM_ROOT      field_alloc;
 MYSQL_ROW     row;            /* If unbuffered read */
 MYSQL_ROW     current_row;    /* buffer to current row */
 unsigned long *lengths;       /* column lengths of current row */
 MYSQL         *handle;        /* for unbuffered reads */
 my_bool       eof;            /* Used my mysql_fetch_row */
} MYSQL_RES;
 
 
typedef struct sql_result{
char *result[];
int signal;
}exe_result
 
/**
 * declare var in member_management modules
 */
char account[ACCOUNT_MAX_LEN];
char *sql;
sql = (char *)malloc(sizeof(char));
int signal;

/**
 * declare function 
 */
 extern char *GetAccount();					                            //获取输入账号
 extern int  SendAccountMsg(account);		                            //向服务器发送信息
 extern exe_result *CheckAccountExist(account);                         //查询账号是否存在
 extern void GetResult(result);			                                //获取从服务返回的注册结果信息
 extern exe_result  ExeSql(sql);					                    //进行相关的sql语句操作
 extern void  mem_add();                                                //会员添加
 extern void  mem_delete();                                             //会员删除
 extern void  mem_search();                                             //会员查询
 extern void  mem_point();                                              //会员积分
 
 
 