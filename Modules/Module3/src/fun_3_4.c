/*
 *created: 17 Feb,2025
 *author: Krupal Vachhani(166883)
*/

#include "../include/header3.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#define MAX 100

void fun_3_4(){
	int32_t n;
	char string[MAX];

	printf("Enter Number:");
	scanf("%d",&n);


	//32 bit signed int max range -2147483648 to 2147483647

	int sign=n,i=0;
	do{
		string[i++]=abs(n%10)+'0';
	}while((n /=10 )!= 0);

	if(sign<0){
		string[i++]='-';
	}

	string[i]='\0';

	//print in reverse oder
	printf("Number in String:");
	for(i-1;i>=0;i--){
		printf("%c",string[i]);
	}
}
