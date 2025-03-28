/*
 *created: 17 Feb,2025
 *author: Krupal Vachhani(166883)
*/

#include "../include/header3.h"
#include <stdio.h>
#include <stdint.h>
#define MAX 30

void fun_3_5(){
	int8_t digit,base,last,i=0;

	//take input base & digit
	printf("Enter digit:");
	scanf("%hhd",&digit);
	printf("Enter Base:");
	scanf("%hhd",&base);

	//check valid base or not
	if(base<=0 || base>16){
		printf("Invalid Base");
		return;
	}

	//conver for particulare base system from decimal
	char string[MAX];
	while(digit>0){
		last = digit%base;
		if(last>=0 && last<=9){
			string[i++]=last + '0';
		}
		else if(last>=10 && last<=15){
			string[i++]=(last-10) + 'A';
		}
		digit/=base;
	}
	string[i]='\0';

	//print
	printf("Output:");
	for(i-1;i>=0;i--){
		printf("%c",string[i]);
	}
	printf("\n");
}
