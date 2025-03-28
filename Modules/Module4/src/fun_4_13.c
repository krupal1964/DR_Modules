/*
 * Author: Krupal Vachhani
 * Created: 27 Feb,2025
 */

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include "../include/header4.h"
#define MAXLEN 100

void fun_4_13(){
        char s[MAXLEN];

        printf("Enter String:");
        line(s,MAXLEN);

        reverse(s);

        printf("%s\n", s);
}

void reverse(char s[]){
	static int i =0;
	static int len;

	int32_t j;
	int32_t c;

	if(i==0){
		len = strlen(s);
	}

	j = len - (i + 1);

	if(i<j){
		c = s[i];
		s[i]=s[j];
		s[j]=c;
		i++;
		reverse(s);
	}else{
		i=0; //after complete exection set i=0
	}
}
