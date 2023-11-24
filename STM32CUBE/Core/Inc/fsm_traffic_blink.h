/*
 * fsm_traffic_blink.h
 *
 *  Created on: Nov 12, 2023
 *      Author: DELL
 */

#ifndef INC_FSM_TRAFFIC_BLINK_H_
#define INC_FSM_TRAFFIC_BLINK_H_

//states for fsm_traffic_blink_lineX
#define init_lineX		19
#define red_lineX		20
#define green_lineX		21
#define yellow_lineX	22
//states for fsm_traffic_blink_lineY
#define	init_lineY		23
#define red_lineY		24
#define green_lineY		25
#define yellow_lineY	26

extern int status_traffic_blink_lineX;
extern int status_traffic_blink_lineY;

void fsm_traffic_blink_lineX_run();
void fsm_traffic_blink_lineY_run();

#endif /* INC_FSM_TRAFFIC_BLINK_H_ */
