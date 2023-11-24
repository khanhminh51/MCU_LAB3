/*
 * global.h
 *
 *  Created on: Nov 12, 2023
 *      Author: DELL
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

extern int status_system;

// define states of whole system
#define 	INIT 	0
#define		MODE1	1
#define		MODE2	2
#define		MODE3	3
#define		MODE4	4

// declare time duration for red, green, yellow in lineX 
extern int time_red_lineX;
extern int time_green_lineX;
extern int time_yellow_lineX;
// temporary varible used for count down time in lineX 
// when it equal to 0, it will be reassigned into initial time
extern int time_red_lineX_temp;
extern int time_green_lineX_temp;
extern int time_yellow_lineX_temp;

// declare time duration for red, green, yellow in lineY 
extern int time_red_lineY;
extern int time_green_lineY;
extern int time_yellow_lineY;
// temporary varible used for count down time in lineY 
// when it equal to 0, it will be reassigned into initial time
extern int time_red_lineY_temp;
extern int time_green_lineY_temp;
extern int time_yellow_lineY_temp;

//index for 7SEG buffer in line X and line Y 
extern int index_lineX;
extern int index_lineY;

#endif /* INC_GLOBAL_H_ */
