/*
 *created: 3 Feb,2025
 *author: Krupal Vachhani(166883)
*/

#include "../include/header1.h"
#include <stdio.h>
#include <stdint.h>
#define MAX 100
//find longest line
void fun_1_16(){
	uint8_t len=0, max=0;
	char c;
        char line[MAX];
        char longest[MAX];

	while((c=getchar()) != EOF){
		if(c == '\n'){
			if(len>max){
				max = len;
				for(int i=0;i<len;i++){
					longest[i]=line[i];
				}
			}
			len=0;
		}
		else{
			if(len<MAX){
				line[len]=c;
			}
			len++;	
		}
	}
	if(len>max){
		max=len;
        	for(int i=0;i<len;i++){
                	longest[i]=line[i];
                }
       	}

	//print output
	printf("\nLength: %d\n",max);
	for(int i=0;i<max && i<MAX;i++){
		printf("%c",longest[i]);
	}
	printf("\n");
}
