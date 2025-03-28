/*
 *created: 31 Jan,2025
 *author: Krupal Vachhani(166883)
 */

#include "../include/header1.h"
#include <stdio.h>

// remove consiqutive space 
void fun_1_9(){
	char curr;
	char prev;
	while((curr=getchar())!=EOF)
	{
		if(curr==' ' || curr=='\t')
		{
			if(prev!=' ' || prev!='\t')
			{
				putchar(curr);
			}
		}
		else
		{
			putchar(curr);
		}
		prev=curr;
	}
}
