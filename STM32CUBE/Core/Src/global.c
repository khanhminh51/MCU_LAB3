/*
 * global.c
 *
 *  Created on: Nov 12, 2023
 *      Author: DELL
 */
#include "global.h"
#include "traffic_buffer.h"

int status_system = INIT;

int time_red_lineX = 5;
int time_green_lineX = 3;
int time_yellow_lineX = 2;

int time_red_lineX_temp = 5;
int time_green_lineX_temp = 3;
int time_yellow_lineX_temp = 2;

int time_green_lineY = 3;
int time_yellow_lineY = 2;
int time_red_lineY = 5;

int time_green_lineY_temp = 3;
int time_yellow_lineY_temp = 2;
int time_red_lineY_temp = 5;

int index_lineX = 0;
int index_lineY = 0;
