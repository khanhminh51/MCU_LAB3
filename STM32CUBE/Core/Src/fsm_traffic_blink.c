/*
 * fsm_traffic_blink.c
 *
 *  Created on: Nov 12, 2023
 *      Author: DELL
 */
#include "fsm_traffic_blink.h"
#include "software_timer.h"
#include "traffic_buffer.h"
#include "traffic.h"
#include "global.h"
#include "control_7SEG.h"

int status_traffic_blink_lineX = init_lineX;
int status_traffic_blink_lineY = init_lineY;


void fsm_traffic_blink_lineX_run(){
	switch(status_traffic_blink_lineX){
		case init_lineX:
			status_traffic_blink_lineX = red_lineX;
			traffic_buffer_lineX[0] = time_red_lineX*1000;
			setTimer1(traffic_buffer_lineX[0]);//led red will turn on in traffic_buffer_lineX[0]/1000 lineXs
			setTimer3(1000);// count down as a clock
			break;
		case red_lineX:
			onRed_lineX();
			//update _7SEG_buffer_lineX
			_7SEG_buffer_lineX[0] = time_red_lineX_temp/10;
			_7SEG_buffer_lineX[1] = time_red_lineX_temp%10;

			if(timer3_flag == 1){
				time_red_lineX_temp--;
				if(time_red_lineX_temp <= 0){
					time_red_lineX_temp = time_red_lineX;
				}
				setTimer3(1000);
			}

			if(timer1_flag == 1){
				status_traffic_blink_lineX = green_lineX;
				traffic_buffer_lineX[1] = time_green_lineX*1000;
				setTimer1(traffic_buffer_lineX[1]);
				setTimer3(1000);
			}
			break;
		case green_lineX:
			onGreen_lineX();
			//update _7SEG_buffer_lineX
			_7SEG_buffer_lineX[0] = time_green_lineX_temp/10;
			_7SEG_buffer_lineX[1] = time_green_lineX_temp%10;

			if(timer3_flag == 1){
				time_green_lineX_temp--;
				if(time_green_lineX_temp == 0){
					time_green_lineX_temp = time_green_lineX;
				}
				setTimer3(1000);
			}

			if(timer1_flag == 1){
				status_traffic_blink_lineX = yellow_lineX;
				traffic_buffer_lineX[2] = time_yellow_lineX*1000;
				setTimer1(traffic_buffer_lineX[2]);
				setTimer3(1000);
			}
			break;
		case yellow_lineX:
			onYellow_lineX();
			//update _7SEG_buffer_lineX
			_7SEG_buffer_lineX[0] = time_yellow_lineX_temp/10;
			_7SEG_buffer_lineX[1] = time_yellow_lineX_temp%10;

			if(timer3_flag == 1){
				time_yellow_lineX_temp--;
				if(time_yellow_lineX_temp == 0){
					time_yellow_lineX_temp = time_yellow_lineX;
				}
				setTimer3(1000);
			}

			if(timer1_flag == 1){
				status_traffic_blink_lineX = red_lineX;
				traffic_buffer_lineX[0] = time_red_lineX*1000;
				setTimer1(traffic_buffer_lineX[0]);
				setTimer3(1000);
			}
			break;
		default:
			break;
	}
}

void fsm_traffic_blink_lineY_run(){
	switch(status_traffic_blink_lineY){
		case init_lineY:
			status_traffic_blink_lineY = green_lineY;
			traffic_buffer_lineY[0] = time_green_lineY*1000;
			setTimer2(traffic_buffer_lineY[0]);
			setTimer5(1000);// count down as a clock
			break;
		case green_lineY:
			onGreen_lineY();
			//update _7SEG_buffer_lineY
			_7SEG_buffer_lineY[0] = time_green_lineY_temp/10;
			_7SEG_buffer_lineY[1] = time_green_lineY_temp%10;

			if(timer5_flag == 1){
				time_green_lineY_temp--;
				// if(time_green_lineY_temp != 0) setTimer5(1000);
				if(time_green_lineY_temp == 0){
					time_green_lineY_temp = time_green_lineY;
				}
				setTimer5(1000);
			}

			if(timer2_flag == 1){
				status_traffic_blink_lineY = yellow_lineY;
				traffic_buffer_lineY[1] = time_yellow_lineY*1000;
				setTimer2(traffic_buffer_lineY[1]);
				setTimer5(1000);
			}
			break;
		case yellow_lineY:
			onYellow_lineY();
			//update _7SEG_buffer_lineY
			_7SEG_buffer_lineY[0] = time_yellow_lineY_temp/10;
			_7SEG_buffer_lineY[1] = time_yellow_lineY_temp%10;

			if(timer5_flag == 1){
				time_yellow_lineY_temp--;
				if(time_yellow_lineY_temp == 0){
					time_yellow_lineY_temp = time_yellow_lineY;
				}
				setTimer5(1000);
			}

			if(timer2_flag == 1){
				status_traffic_blink_lineY = red_lineY;
				traffic_buffer_lineY[2] = time_red_lineY*1000;
				setTimer2(traffic_buffer_lineY[2]);
				setTimer5(1000);
			}
			break;
		case red_lineY:
			onRed_lineY();
			//update _7SEG_buffer_lineY
			_7SEG_buffer_lineY[0] = time_red_lineY_temp/10;
			_7SEG_buffer_lineY[1] = time_red_lineY_temp%10;

			if(timer5_flag == 1){
				time_red_lineY_temp--;
				if(time_red_lineY_temp == 0){
					time_red_lineY_temp = time_red_lineY;
				}
				setTimer5(1000);
			}

			if(timer2_flag == 1){
				status_traffic_blink_lineY = green_lineY;
				traffic_buffer_lineY[0] = time_green_lineY*1000;
				setTimer2(traffic_buffer_lineY[0]);
				setTimer5(1000);
			}
			break;
		default:
			break;
	}
}

