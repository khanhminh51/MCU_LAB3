/*
 * fsm_7SEG_lineY.c
 *
 *  Created on: Nov 12, 2023
 *      Author: DELL
 */

#include "fsm_7SEG_lineY.h"
#include "software_timer.h"
#include "global.h"
#include "control_7SEG.h"

int status_7SEG_lineY = display_countDown_lineY;



void fsm_7SEG_lineY_run(){
	switch(status_7SEG_lineY){
		case display_countDown_lineY:
			if(timer6_flag == 1)//control 2 led 7-SEG
			{
				update7SEG_lineY(index_lineY++);
				if(index_lineY == 2) index_lineY = 0;
				setTimer6(200);
			}
			break;
		case display_time_value:
			if(timer6_flag == 1)//control 2 led 7-SEG
			{
				update7SEG_lineY(index_lineY++);
				if(index_lineY == 2) index_lineY = 0;
				setTimer6(200);
			}
			break;
		default:
			break;
	}
}
