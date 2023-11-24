/*
 * fsm_traffic_lineX.c
 *
 *  Created on: Nov 12, 2023
 *      Author: DELL
 */

#include "fsm_traffic_lineX.h"
#include "main.h"
#include "control_7SEG.h"
#include "fsm_traffic_blink.h"
#include "software_timer.h"
#include "traffic.h"

int status_traffic_lineX = display_traffic_lineX;


void fsm_traffic_lineX_run(){
	switch(status_traffic_lineX){

		//normal mode (mode 1)
		case display_traffic_lineX:
			fsm_traffic_blink_lineX_run();
			break;

		//mode 2
		case modifying_led_red_lineX:
			// turn off led green and yellow
			offGreenYellow_lineX();
			if(timer8_flag == 1){
				//toggle led red with frequency 2Hz
				toggleRed_lineX();
				setTimer8(500);
			}
			break;

		//mode 3
		case modifying_led_yellow_lineX:
			offGreenRed_lineX();
			if(timer8_flag == 1){
				toggleYellow_lineX();
				setTimer8(500);
			}
			break;

		//mode 4
		case modifying_led_green_lineX:
			offRedYellow_lineX();
			if(timer8_flag == 1){
				toggleGreen_lineX();
				setTimer8(500);
			}
			break;
		default:
			break;
	}
}
