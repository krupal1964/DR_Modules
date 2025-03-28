/*
 * Author: Krupal Vachhani
 * Created: 27 Feb,2025
 */

#include <stdio.h>
#include "../include/header4.h"
#define swap(t, x, y){ t _z; _z=x; x=y; y=_z; }

void fun_4_14(){
        char a,b;
	a='X';
	b='Y';
        printf("x= %c \t y= %c\n",a,b);
        swap(char, a, b);
        printf("x=%c \t y=%c\n",a,b);
}
