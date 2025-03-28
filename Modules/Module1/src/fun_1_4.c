/*
 * Created: 30 Jan,2025
 * Author: Krupal Vachhani(16683)
 */

#include "../include/header1.h"
#include <stdio.h>
#include <stdint.h>
// print temprature table
void fun_1_4(){
	for( uint8_t i=0 ; i<=10 ; i++){
		printf("Celsius: %d Fahrenheit: %.2f\n",i,(i*1.8)+32);
	}
}
