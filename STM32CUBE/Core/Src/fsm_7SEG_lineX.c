/*
 * fsm_7SEG_lineX.c
 *
 *  Created on: Nov 12, 2023
 *      Author: DELL
 */


#include "fsm_7SEG_lineX.h"
#include "software_timer.h"
#include "control_7SEG.h"
#include "global.h"
#include "traffic_buffer.h"

int status_7SEG_lineX = display_countDown_lineX;


void fsm_7SEG_lineX_run(){
	switch(status_7SEG_lineX){
		case display_countDown_lineX:
			if(timer4_flag == 1)//control 2 led 7-SEG by scan led
			{
				update7SEG_lineX(index_lineX++);
				if(index_lineX == 2) index_lineX = 0;
				setTimer4(200);
			}
			break;
		case display_mode02:
			_7SEG_buffer_lineX[0] = 0;
			_7SEG_buffer_lineX[1] = 2;
			if(timer4_flag == 1)//control 2 led 7-SEG by scan led
			{
				update7SEG_lineX(index_lineX++);
				if(index_lineX == 2) index_lineX = 0;
				setTimer4(200);
			}
			break;
		case display_mode03:
			_7SEG_buffer_lineX[0] = 0;
			_7SEG_buffer_lineX[1] = 3;
			if(timer4_flag == 1)//control 2 led 7-SEG by scan led
			{
				update7SEG_lineX(index_lineX++);
				if(index_lineX == 2) index_lineX = 0;
				setTimer4(200);
			}
			break;
		case display_mode04:
			_7SEG_buffer_lineX[0] = 0;
			_7SEG_buffer_lineX[1] = 4;
			if(timer4_flag == 1)//control 2 led 7-SEG by scan led
			{
				update7SEG_lineX(index_lineX++);
				if(index_lineX == 2) index_lineX = 0;
				setTimer4(200);
			}
			break;
		default:
			break;
	}
}
