/*
 * control_7SEG.c
 *
 *  Created on: Nov 12, 2023
 *      Author: DELL
 */

#include "control_7SEG.h"
#include "main.h"
#include "traffic_buffer.h"

void display7SEG_lineX(int num){
	HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
	HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
	HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
	HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
	HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, RESET);
	HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
	HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
	switch(num){
		case 0:
			HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, SET);
			break;
		case 1:
			HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, SET);
			HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, SET);
			HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
			HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, SET);
			HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, SET);
			break;
		case 2:
			HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, SET);
			HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, SET);
			break;
		case 3:
			HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
			HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, SET);
			break;
		case 4:
			HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, SET);
			HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, SET);
			HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
			break;
		case 5:
			HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, SET);
			HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
			break;
		case 6:
			HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, SET);
			break;
		case 7:
			HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, SET);
			HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
			HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, SET);
			HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, SET);
			break;
		case 8:
			break;
		case 9:
			HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
			break;
		default:
			break;
	  }
}

void display7SEG_lineY(int num){
	HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
	HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
	HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
	HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
	HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, RESET);
	HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
	HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
	switch(num){
		case 0:
			HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, SET);
			break;
		case 1:
			HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, SET);
			HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, SET);
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
			HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, SET);
			HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, SET);
			break;
		case 2:
			HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, SET);
			HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, SET);
			break;
		case 3:
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
			HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, SET);
			break;
		case 4:
			HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, SET);
			HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, SET);
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
			break;
		case 5:
			HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, SET);
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
			break;
		case 6:
			HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, SET);
			break;
		case 7:
			HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, SET);
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
			HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, SET);
			HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, SET);
			break;
		case 8:
			break;
		case 9:
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
			break;
		default:
			break;
	  }
}

void update7SEG_lineX(int index_lineX){
	switch(index_lineX){
		case 0:
			// Display the first 7 SEG with _7SEG_buffer_lineX [0]
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			display7SEG_lineX(_7SEG_buffer_lineX[0]);
			break;
		case 1:
			// Display line X 7 SEG with _7SEG_buffer_lineX [1]

			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
			display7SEG_lineX(_7SEG_buffer_lineX[1]);
			break;
	}
}

void update7SEG_lineY(int index_lineY){
	switch(index_lineY){
		case 0:
			// Display the first 7 SEG with _7SEG_buffer_lineY [0]
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			display7SEG_lineY(_7SEG_buffer_lineY[0]);
			break;
		case 1:
			// Display line Y 7 SEG with _7SEG_buffer_lineY [1]
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
			display7SEG_lineY(_7SEG_buffer_lineY[1]);
			break;
	}
}
