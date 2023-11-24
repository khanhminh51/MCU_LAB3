/*
 * traffic_buffer.h
 *
 *  Created on: Nov 12, 2023
 *      Author: DELL
 */

#ifndef INC_TRAFFIC_BUFFER_H_
#define INC_TRAFFIC_BUFFER_H_

//save time duration for led red, green, yellow in line X 
//traffic_buffer_lineX[0]: time duration led red
//traffic_buffer_lineX[1]: time duration led green
//traffic_buffer_lineX[2]: time duration led yellow
extern int traffic_buffer_lineX[3];

//save time duration for led green, yellow, red in line Y 
//traffic_buffer_lineY[0]: time duration led green
//traffic_buffer_lineY[1]: time duration led yellow
//traffic_buffer_lineY[2]: time duration led red
extern int traffic_buffer_lineY[3];

//buffer is used for display time value in line X 
extern int _7SEG_buffer_lineX[2];
//buffer is used for display time value in line Y 
extern int _7SEG_buffer_lineY[2];


#endif /* INC_TRAFFIC_BUFFER_H_ */
