/*
 * fsm_7SEG_lineX.h
 *
 *  Created on: Nov 12, 2023
 *      Author: DELL
 */

#ifndef INC_FSM_7SEG_LINEX_H_
#define INC_FSM_7SEG_LINEX_H_

//states for fsm_7SEG_lineX
#define display_countDown_lineX		11
#define display_mode02				12
#define display_mode03				13
#define display_mode04				14

extern int status_7SEG_lineX;

void fsm_7SEG_lineX_run();

#endif /* INC_FSM_7SEG_LINEX_H_ */
