/*
 * button.h
 *
 *  Created on: Nov 12, 2023
 *      Author: DELL
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"
#include "control_7SEG.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

int is_button1_pressed();//if button1 is pressed, return 1, else return 0
int is_button2_pressed();//if button2 is pressed, return 1, else return 0
int is_button3_pressed();//if button3 is pressed, return 1, else return 0

#endif /* INC_BUTTON_H_ */

