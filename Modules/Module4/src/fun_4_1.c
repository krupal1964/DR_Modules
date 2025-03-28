/*
 * Author: Krupal Vachhani
 * Created: 19 Feb,2025
 */

#include <stdio.h>
#include <ctype.h>
#include <stdint.h>
#include "../include/header4.h"
#define LIMIT 50

void fun_4_1(){
	char input[LIMIT],pattern[LIMIT];
	int32_t i,j=0,index=-1;
	printf("Enter Input String:");
	line(input,LIMIT);
	printf("Enter Pattern:");
	int32_t len=line(pattern,LIMIT);
	for(i=0;input[i]!='\0';i++){
		while(tolower(input[i+j])==tolower(pattern[j]) && pattern[j]!='\0'){
			j++;
		}
		if(j==len){
                	index=i;
                }
		j=0;	
	}
	printf("Matched at Index %d\n",index);
}
