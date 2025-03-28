/*
 *created: 6 Feb,2025
 *author: Krupal Vachhani(166883)
*/

#include "../include/header1.h"
#include <stdio.h>
#include <stdint.h>
#define LIMIT 100
void fun_1_19(){
        char c;
	char input[LIMIT];
	uint8_t lindex=0;

	//take input
        while((c=getchar()) != EOF && lindex+1<LIMIT){
                input[lindex]=c;
		lindex++;
        }
	uint8_t len=lindex;
	input[len]='\0';


	uint8_t sindex=0;
	lindex--;
	
	//reverse string
	while(sindex<lindex){
		c=input[sindex];
		input[sindex]=input[lindex];
		input[lindex]=c;
		sindex++;
		lindex--;
	}

	//print
	printf("\n%s\n",input);
}
