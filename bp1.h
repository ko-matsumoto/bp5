/*********************************************************/
/*  bp1.h                                                */
/*                                                       */
/*  階層型ニューロネットプログラム                       */
/*  Back Propagation                                     */
/*                                                       */
/*********************************************************/
#ifndef _BP1_H_
#define _BP1_H_

#include "lrndata.h"
#include "wdata.h"

#define ALPHA 10   /* 学習係数 */

typedef struct{
	double hi[HD_NUM];
} Hd_output;

typedef struct{
	double output;
} Output;

/*  forward関数                                */
double forward(int r_cnt, Lrndata *lrndata, Whdata *whdata, Wodata *wodata, Hd_output *hdo, Output *o);

/*  olearn関数                                */
void olearn(int r_cnt, Lrndata *lrndata, Wodata *wodata, Hd_output *hdo, Output *o);

/*  hlearn関数                                */
void hlearn(int r_cnt, Lrndata *lrndata, Whdata *whdata, Wodata *wodata, Hd_output *hdo, Output *o);


#endif

