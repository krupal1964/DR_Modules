/*
 * Author: Krupal Vachhani
 * Created: 27 Feb,2025
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "../include/header4.h"
#define MAXLEN 100

void fun_4_12(){
	int32_t n;
	char s[MAXLEN];

	printf("Enter Number:");
	scanf("%d",&n);

	itoa(n , s);

	printf("String Format:%s", s);

}

void itoa(int n, char s[]){
	static int i;

	if (n / 10)
		itoa(n/10,s);
	else{
		i=0;
		if(n<0)
			s[i++] = '-';
	}

	s[i++] = abs(n) % 10 + '0';

	s[i] = '\0';
}
