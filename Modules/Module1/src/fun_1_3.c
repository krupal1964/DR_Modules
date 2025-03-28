/*
 * Created: 30 Jan,2025
 * Author: Krupal Vachhani(16683)
 */

#include "../include/header1.h"
#include <stdio.h>
#include <stdint.h>

// print Table of temprature with header
void fun_1_3(){
	printf("\n**********Temprature Table**********\n\n");
	printf("Celsius Fahrenheit\n\n");
	for( uint8_t i=0 ; i<=10 ; i++){
                printf("%d       %.2f\n",i,(i*1.8)+32);
        }
}
