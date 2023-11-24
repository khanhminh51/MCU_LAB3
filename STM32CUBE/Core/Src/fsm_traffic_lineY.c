/*
 * fsm_traffic_lineY.c
 *
 *  Created on: Nov 12, 2023
 *      Author: DELL
 */
#include "fsm_traffic_lineY.h"
#include "software_timer.h"
#include "traffic.h"

int status_traffic_lineY = display_traffic_lineY;

void fsm_traffic_lineY_run(){
	switch(status_traffic_lineY){

		//normal mode (mode 1)
		case display_traffic_lineY:
			fsm_traffic_blink_lineY_run();
			break;

		//mode 2
		case modifying_led_red_lineY:
			offGreenYellow_lineY();
			if(timer7_flag == 1){
				toggleRed_lineY();
				setTimer7(500);
			}
			break;

		//mode 3
		case modifying_led_yellow_lineY:
			offGreenRed_lineY();
			if(timer7_flag == 1){
				toggleYellow_lineY();
				setTimer7(500);
			}
			break;

		//mode 4
		case modifying_led_green_lineY:
			// turn off red and yellow led
			offRedYellow_lineY();
			if(timer7_flag == 1){
				//toggle green led with frequency 2Hz
				toggleGreen_lineY();
				setTimer7(500);
			}
			break;
		default:
			break;
	}
}
