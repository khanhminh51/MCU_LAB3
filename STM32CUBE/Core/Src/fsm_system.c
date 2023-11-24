/*
 * fsm_system.c
 *
 *  Created on: Nov 12, 2023
 *      Author: DELL
 */

#include "fsm_system.h"
#include "global.h"
#include "button.h"
#include "traffic.h"
#include "control_7SEG.h"
#include "traffic_buffer.h"
#include "fsm_traffic_blink.h"


void fsm_system_run(){
	switch(status_system){
		case INIT:
			status_system = MODE1;
			break;
		case MODE1://normal mode: The traffic light application is running normally
			status_traffic_lineX = display_traffic_lineX;
			status_traffic_lineY = display_traffic_lineY;
			status_7SEG_lineX = display_countDown_lineX;
			status_7SEG_lineY = display_countDown_lineY;
			if(is_button1_pressed() == 1){
				status_system = MODE2;
			}
			break;
		case MODE2://mode2: Modify time duration for the red LEDs
			status_traffic_lineX = modifying_led_red_lineX;
			status_traffic_lineY = modifying_led_red_lineY;
			status_7SEG_lineX = display_mode02;
			status_7SEG_lineY = display_time_value;

			//lineY button is used to increase the time duration value for the red LEDs
			if(is_button2_pressed() == 1){
				time_red_lineX++;
				time_red_lineY++;
				if(time_red_lineX > 99) time_red_lineX = 0;
				if(time_red_lineY > 99) time_red_lineY = 0;

			}
			//update buffer
			_7SEG_buffer_lineY[0] = time_red_lineY/10;
			_7SEG_buffer_lineY[1] = time_red_lineY%10;

			//The third button is used to set the value
			if(is_button3_pressed() == 1){
				time_red_lineX_temp= time_red_lineX;
				time_red_lineY_temp= time_red_lineY;
			}
	
			// change into MODE3
			if(is_button1_pressed() == 1){
				status_system = MODE3;
			}
			break;
		case MODE3://Mode 3 - Modify time duration for the yellow LEDs:
			status_traffic_lineX = modifying_led_yellow_lineX;
			status_traffic_lineY = modifying_led_yellow_lineY;
			status_7SEG_lineX = display_mode03;
			status_7SEG_lineY = display_time_value;

			//lineY button is used to increase the time duration value for the yellow LEDs
			if(is_button2_pressed() == 1){
				time_yellow_lineX++;
				time_yellow_lineY++;
				if(time_yellow_lineX > 99) time_yellow_lineX = 0;
				if(time_yellow_lineY > 99) time_yellow_lineY = 0;
			}
			//update buffer
			_7SEG_buffer_lineY[0] = time_yellow_lineY/10;
			_7SEG_buffer_lineY[1] = time_yellow_lineY%10;

			//The third button is used to set the value
			if(is_button3_pressed() == 1){
				time_yellow_lineX_temp= time_yellow_lineX;
				time_yellow_lineY_temp= time_yellow_lineY;
			}

			// change into MODE4
			if(is_button1_pressed() == 1){
				status_system = MODE4;
			}
			break;
		case MODE4://Mode 4 - Modify time duration for the green LEDs
			status_traffic_lineX = modifying_led_green_lineX;
			status_traffic_lineY = modifying_led_green_lineY;
			status_7SEG_lineX = display_mode04;
			status_7SEG_lineY = display_time_value;

			//lineY button is used to increase the time duration value for the green LEDs
			if(is_button2_pressed() == 1){
				time_green_lineX++;
				time_green_lineY++;
				if(time_green_lineX > 99) time_green_lineX = 0;
				if(time_green_lineY > 99) time_green_lineY = 0;
			}
			//update buffer
			_7SEG_buffer_lineY[0] = time_green_lineY/10;
			_7SEG_buffer_lineY[1] = time_green_lineY%10;

			//The third button is used to set the value
			if(is_button3_pressed() == 1){
				time_green_lineX_temp= time_green_lineX;
				time_green_lineY_temp= time_green_lineY;
			}
			// turn back into MODE1
			if(is_button1_pressed() == 1){
				status_traffic_blink_lineX = init_lineX;
				status_traffic_blink_lineY = init_lineY;
				status_system = INIT;
			}
			break;
	}
}
