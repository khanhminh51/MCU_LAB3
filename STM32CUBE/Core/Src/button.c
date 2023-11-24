/*
 * button.c
 *
 *  Created on: Nov 12, 2023
 *      Author: DELL
 */

#include "button.h"
int keyReg0[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int keyReg1[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int keyReg2[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};

int keyReg3[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};// trạng thái ổn định trước đó

int button1_flag = 0;
int button2_flag = 0;
int button3_flag = 0;


int is_button1_pressed()
{
	if(button1_flag == 1)
	{
		button1_flag = 0;
		return 1;
	}
	else return 0;
}
int is_button2_pressed()
{
	if(button2_flag == 1)
	{
		button2_flag = 0;
		return 1;
	}
	else return 0;
}
int is_button3_pressed()
{
	if(button3_flag == 1)
	{
		button3_flag = 0;
		return 1;
	}
	else return 0;
}

void getKeyInput()
{
	for(int i = 0; i < 3; i++){
		// button debouncing
		keyReg0[i] = keyReg1[i];
		keyReg1[i] = keyReg2[i];
		//handle button 1
		if(i == 0){
			keyReg2[i] = HAL_GPIO_ReadPin(BTN1_GPIO_Port, BTN1_Pin);
			// if the button not bounce
			if((keyReg0[i] == keyReg1[i]) && (keyReg1[i] == keyReg2[i]))
			{
				if(keyReg3[i] != keyReg2[i])
				{
					keyReg3[i] = keyReg2[i]; // update for keyReg3
					if(keyReg2[i] == PRESSED_STATE)
					{
						//TODO
						button1_flag = 1;
					}
				}
			}
		}
		//handle button 2
		if(i == 1){
			keyReg2[i] = HAL_GPIO_ReadPin(BTN2_GPIO_Port, BTN2_Pin);
			// if the button not bounce
			if((keyReg0[i] == keyReg1[i]) && (keyReg1[i] == keyReg2[i]))
			{
				if(keyReg3[i] != keyReg2[i])
				{
					keyReg3[i] = keyReg2[i]; // update for keyReg3
					if(keyReg2[i] == PRESSED_STATE)
					{
						//TODO
						button2_flag = 1;
					}
				}
			}
		}
		//handle button 3
		if(i == 2){
			keyReg2[i] = HAL_GPIO_ReadPin(BTN3_GPIO_Port, BTN3_Pin);
			// if the button not bounce
			if((keyReg0[i] == keyReg1[i]) && (keyReg1[i] == keyReg2[i]))
			{
				if(keyReg3[i] != keyReg2[i])
				{
					keyReg3[i] = keyReg2[i]; //update for keyReg3
					if(keyReg2[i] == PRESSED_STATE)
					{
						//TODO
						button3_flag = 1;
					}
				}
			}
		}
	}
}
