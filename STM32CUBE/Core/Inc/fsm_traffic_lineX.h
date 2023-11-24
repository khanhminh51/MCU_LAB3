/*
 * fsm_traffic_lineX.h
 *
 *  Created on: Nov 12, 2023
 *      Author: DELL
 */

#ifndef INC_FSM_TRAFFIC_LINEX_H_
#define INC_FSM_TRAFFIC_LINEX_H_

//states for fsm_traffic_lineX

//normal mode (mode 1)
#define display_traffic_lineX			5

//mode 2
#define modifying_led_red_lineX			6

//mode 3
#define modifying_led_yellow_lineX		7

//mode 4
#define modifying_led_green_lineX		8


//current mode
extern int status_traffic_lineX;

void fsm_traffic_lineX_run();

#endif /* INC_FSM_TRAFFIC_LINEX_H_ */
