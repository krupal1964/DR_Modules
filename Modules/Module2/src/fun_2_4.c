
/* Author: Krupal Vachhani(166883)
 * Created: 10 Feb ,2025
 * purpose: removing character in s1 that present in s2
 */

// Header Files
#include <stdio.h>
#include <stdint.h>
#include "../include/header2.h"
#define LIMIT 50

void fun_2_4(){
        char s1[LIMIT],s2[LIMIT];
	printf("Enter String1:");
        getinput(s1,LIMIT);
	printf("Enter String2:");
	getinput(s2,LIMIT);
	sequeeze(s1,s2);
	printf("Output:%s",s1);
}
