/*
 * traffic.c
 *
 *  Created on: Nov 12, 2023
 *      Author: DELL
 */

#ifndef SRC_TRAFFIC_C_
#define SRC_TRAFFIC_C_

#include "traffic.h"
#include "main.h"

void onRed_lineX(){
	HAL_GPIO_WritePin(REDA_GPIO_Port, REDA_Pin, SET);
	HAL_GPIO_WritePin(YELLOWA_GPIO_Port, YELLOWA_Pin, RESET);
	HAL_GPIO_WritePin(GREENA_GPIO_Port, GREENA_Pin, RESET);
}

void onGreen_lineX(){
	HAL_GPIO_WritePin(REDA_GPIO_Port, REDA_Pin, RESET);
	HAL_GPIO_WritePin(YELLOWA_GPIO_Port, YELLOWA_Pin, RESET);
	HAL_GPIO_WritePin(GREENA_GPIO_Port, GREENA_Pin, SET);
}

void onYellow_lineX(){
	HAL_GPIO_WritePin(REDA_GPIO_Port, REDA_Pin, RESET);
	HAL_GPIO_WritePin(YELLOWA_GPIO_Port, YELLOWA_Pin, SET);
	HAL_GPIO_WritePin(GREENA_GPIO_Port, GREENA_Pin, RESET);
}

void onRed_lineY(){
	HAL_GPIO_WritePin(REDB_GPIO_Port, REDB_Pin, SET);
	HAL_GPIO_WritePin(YELLOWB_GPIO_Port, YELLOWB_Pin, RESET);
	HAL_GPIO_WritePin(GREENB_GPIO_Port, GREENB_Pin, RESET);
}

void onGreen_lineY(){
	HAL_GPIO_WritePin(REDB_GPIO_Port, REDB_Pin, RESET);
	HAL_GPIO_WritePin(YELLOWB_GPIO_Port, YELLOWB_Pin, RESET);
	HAL_GPIO_WritePin(GREENB_GPIO_Port, GREENB_Pin, SET);
}

void onYellow_lineY(){
	HAL_GPIO_WritePin(REDB_GPIO_Port, REDB_Pin, RESET);
	HAL_GPIO_WritePin(YELLOWB_GPIO_Port, YELLOWB_Pin, SET);
	HAL_GPIO_WritePin(GREENB_GPIO_Port, GREENB_Pin, RESET);
}



void toggleLedRed(){
	HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
}

void toggleRed_lineX(){
	HAL_GPIO_TogglePin(REDA_GPIO_Port, REDA_Pin);
}

void toggleGreen_lineX(){
	HAL_GPIO_TogglePin(GREENA_GPIO_Port, GREENA_Pin);
}

void toggleYellow_lineX(){
	HAL_GPIO_TogglePin(YELLOWA_GPIO_Port, YELLOWA_Pin);
}

void toggleRed_lineY(){
	HAL_GPIO_TogglePin(REDB_GPIO_Port, REDB_Pin);
}

void toggleGreen_lineY(){
	HAL_GPIO_TogglePin(GREENB_GPIO_Port, GREENB_Pin);
}

void toggleYellow_lineY(){
	HAL_GPIO_TogglePin(YELLOWB_GPIO_Port, YELLOWB_Pin);
}

void offAllLed_lineX(){
	HAL_GPIO_WritePin(REDA_GPIO_Port, REDA_Pin, RESET);
	HAL_GPIO_WritePin(YELLOWA_GPIO_Port, YELLOWA_Pin, RESET);
	HAL_GPIO_WritePin(GREENA_GPIO_Port, GREENA_Pin, RESET);
}
void offGreenYellow_lineX(){
	HAL_GPIO_WritePin(YELLOWA_GPIO_Port, YELLOWA_Pin, RESET);
	HAL_GPIO_WritePin(GREENA_GPIO_Port, GREENA_Pin, RESET);
}
void offGreenRed_lineX(){
	HAL_GPIO_WritePin(REDA_GPIO_Port, REDA_Pin, RESET);
	HAL_GPIO_WritePin(GREENA_GPIO_Port, GREENA_Pin, RESET);
}
void offRedYellow_lineX(){
	HAL_GPIO_WritePin(REDA_GPIO_Port, REDA_Pin, RESET);
	HAL_GPIO_WritePin(YELLOWA_GPIO_Port, YELLOWA_Pin, RESET);
}


void offAllLed_lineY(){
	HAL_GPIO_WritePin(REDB_GPIO_Port, REDB_Pin, RESET);
	HAL_GPIO_WritePin(YELLOWB_GPIO_Port, YELLOWB_Pin, RESET);
	HAL_GPIO_WritePin(GREENB_GPIO_Port, GREENB_Pin, RESET);
}
void offGreenYellow_lineY(){
	HAL_GPIO_WritePin(YELLOWB_GPIO_Port, YELLOWB_Pin, RESET);
	HAL_GPIO_WritePin(GREENB_GPIO_Port, GREENB_Pin, RESET);
}
void offGreenRed_lineY(){
	HAL_GPIO_WritePin(REDB_GPIO_Port, REDB_Pin, RESET);
	HAL_GPIO_WritePin(GREENB_GPIO_Port, GREENB_Pin, RESET);
}
void offRedYellow_lineY(){
	HAL_GPIO_WritePin(REDB_GPIO_Port, REDB_Pin, RESET);
	HAL_GPIO_WritePin(YELLOWB_GPIO_Port, YELLOWB_Pin, RESET);
}

#endif /* SRC_TRAFFIC_C_ */
