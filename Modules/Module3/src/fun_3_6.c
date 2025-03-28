/*
 *created: 18 Feb,2025
 *author: Krupal Vachhani(166883)
*/

#include "../include/header3.h"
#include <stdio.h>
#include <stdint.h>
#define MAX 30

void fun_3_6()
{
	int32_t num;
	uint8_t min_len;
	int i=0;
	char s[MAX];
	printf("Enter a number:");
	scanf("%d",&num);
	printf("Enter width:");
	scanf("%hhd",&min_len);

	//store number in string
	while(num>0)
	{
		s[i++]=num%10 + '0';
		num/=10;
	
	}
	//calculate number of space
	int8_t space;
	space = min_len - i;
	while(space > 0)
	{
		s[i++]='*';
		space--;
	}
	
	//attach end '\0'
	s[i]='\0';

	//print result
	printf("Output:");
	for(i-1;i>=0;i--)
	{
		printf("%c",s[i]);
	}
}
