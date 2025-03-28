/*
 * Created: 30 Jan,2025
 * Author: Krupal Vachhani(16683)
 */

#include "../include/header1.h"
#include <stdio.h>

// check value of getchar() != EOF
void fun_1_6(){
	char i = (getchar() != EOF);
	printf("Value is %d\n",i);
}
