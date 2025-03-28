
/* Author: Krupal Vachhani(166883)
 * Created: 10 Feb ,2025
 */

// Header Files
#include <stdio.h>
#include <stdint.h>
#include "../include/header2.h"
#define MAX 100

void fun_2_2(){

	char input[MAX];
	char c;
	uint8_t i=0;

	/*
	 * for(i=0;i<MAX-1 && (c=getchar()) != '\n' && c!=EOF;i++){
	 * 	input[i]=c;
	 * }
	 */

	for(i=0;i<MAX-1;i++){
		c=getchar();

		if(c=='\n'){
			break;
		}

		else if(c==EOF){
			break;
		}
		
		else{
			input[i]=c;
		}
	}

	input[i]='\0';

	printf("\n%s",input);

}
