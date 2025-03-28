/*
 *created: 3 Feb,2025
 *author: Krupal Vachhani(166883)
*/

#include "../include/header1.h"
#include <stdio.h>
#include <stdint.h>
#define MAX 50
#define LIMIT 8
//check line contain more than 80 character or not
void fun_1_17(){
	uint8_t len=0,i=0;
	char c;
        char line[MAX],output[MAX];

	while((c=getchar()) != EOF){
		// if we get new line than check previous line is conatin 80 or more character
		if(c == '\n'){
			if(len>LIMIT){
				for(int j=0;j<len;j++)
					output[i++]=line[j];
				output[i++]='\n';
			}
			len=0;
		}
		//take continuous input
		else{
			if(len<MAX){
				line[len]=c;
			}
			len++;	
		}
	}

	//for last line checking is above 80 character or not
        if(len>LIMIT){
                for(int j=0;j<len;j++){
                	output[i++]=line[j];
                }
        }


	//print output
	printf("\nLine that was more than 8 character\n");
	for(int j=0;j<i;j++){
		putchar(output[j]);
	}
}
