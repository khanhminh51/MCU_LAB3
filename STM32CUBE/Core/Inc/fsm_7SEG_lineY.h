/*
 * fsm_7SEG_lineY.h
 *
 *  Created on: Nov 12, 2023
 *      Author: DELL
 */

#ifndef INC_FSM_7SEG_LINEY_H_
#define INC_FSM_7SEG_LINEY_H_

//states for fsm_7SEG_lineY
#define display_countDown_lineY		15
#define display_time_value			16

extern int status_7SEG_lineY;

void fsm_7SEG_lineY_run();

#endif /* INC_FSM_7SEG_LINEY_H_ */
