
/* Author: Krupal Vachhani
 * Date: 31 Jan,2025
 */

#include "../include/header1.h"
#include <stdio.h>
#include <stdint.h>
// print temprature table in reverse order
void fun_1_5(){
	for( uint8_t i=10 ; i>=0 ; i--){
                printf("Celsius: %d Fahrenheit: %.2f\n",i,(i*1.8)+32);
        }
}
