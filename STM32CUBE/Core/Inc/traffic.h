/*
 * traffic.h
 *
 *  Created on: Nov 12, 2023
 *      Author: DELL
 */

#ifndef INC_TRAFFIC_H_
#define INC_TRAFFIC_H_

void onRed_lineX();// turn on led red on lineX 
void onGreen_lineX();// turn on led green on lineX 
void onYellow_lineX();// turn on led yellow on lineX 

void onRed_lineY();// turn on led red on lineY 
void onGreen_lineY();// turn on led green on lineY 
void onYellow_lineY();// turn on led yellow on lineY 

void toggleLedRed();//toggle led-red for debugging

void toggleRed_lineX();// toggle led red on lineX 
void toggleGreen_lineX();//toggle led green on lineX 
void toggleYellow_lineX();//toggle led yellow on lineX 

void toggleRed_lineY();// toggle led red on lineY 
void toggleGreen_lineY();//toggle led green on lineY 
void toggleYellow_lineY();//toggle led yellow on lineY 

void offAllLed_lineX();// turn off all led on lineX 
void offGreenYellow_lineX();// turn off green and yellow led on lineX 
void offGreenRed_lineX();// turn off green and red led on lineX 
void offRedYellow_lineX();// turn off red and yellow led on lineX 


void offAllLed_lineY();// turn off all led on lineY 
void offGreenYellow_lineY();// turn off green and yellow led on lineY 
void offGreenRed_lineY();// turn off green and red led on lineY 
void offRedYellow_lineY();// turn off red and yellow led on lineY 

#endif /* INC_TRAFFIC_H_ */
