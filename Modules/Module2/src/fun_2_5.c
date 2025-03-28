/* Purpose: check common character present or not
 * Author: Krupal Vachhani(166883)
 * Created: 10 Feb ,2025
 */

// Header Files
#include <stdio.h>
#include <stdint.h>
#include "../include/header2.h"
#define LIMIT 50

void fun_2_5(){
        char s1[LIMIT],s2[50];
        printf("Enter String1:");
        uint8_t length_s1=getinput(s1,LIMIT);
        printf("Enter String2:");
        uint8_t length_s2=getinput(s2,LIMIT);
        uint8_t value=any(s1,length_s1,s2,length_s2);
        printf("index at:%hhd",value);
}
