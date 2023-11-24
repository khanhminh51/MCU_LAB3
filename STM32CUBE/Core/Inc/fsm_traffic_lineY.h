/*
 * fsm_traffic_lineY.h
 *
 *  Created on: Nov 12, 2023
 *      Author: DELL
 */

#ifndef INC_FSM_TRAFFIC_LINEY_H_
#define INC_FSM_TRAFFIC_LINEY_H_

//states for fsm_traffic_lineY

//normal mode (mode 1)
#define display_traffic_lineY	9

//mode 2
#define modifying_led_red_lineY	30

//mode 3
#define modifying_led_yellow_lineY	31

//mode 4
#define modifying_led_green_lineY	32


extern int status_traffic_lineY;

void fsm_traffic_lineY_run();

#endif /* INC_FSM_TRAFFIC_LINEY_H_ */
