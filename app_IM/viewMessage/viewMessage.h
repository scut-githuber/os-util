#ifndef VIEWMESSAGE_H_INCLUDED
#define VIEWMESSAGE_H_INCLUDED

/**
 * include head file
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


/**
 * declare function
 */


extern int PostUsrMsg(Data const *data_enc);
extern int GetSendRes(int post_res);
extern int ProcessMsgRes(int send_res);
#endif // SENDMESSAGE_H_INCLUDED
