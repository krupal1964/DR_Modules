/*
 * purpose: convert tab and newline into \t & \n
 *created: 13 Feb,2025
 *author: Krupal Vachhani(166883)
*/

#include "../include/header3.h"
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#define LIMIT 100

void fun_3_2(){
	char input[LIMIT],output[LIMIT];

	/* enter multiline input */
	printf("Enter input String:");
	mline(input,LIMIT);

	uint8_t i=0,j=0;

	while(input[i] != '\0'){
		switch (input[i]){

			//tab convert into \t
			case '\t':
				output[j]='\\';
				++j;
				output[j]='t';
				break;

			//newline convert into \n
			case '\n':
				output[j]='\\';
				++j;
				output[j]='n';
				break;

			//other all case
			default:
				output[j]=input[i];
				break;
		}
		++i;
		++j;
	}
	output[j]='\0';
	//output
	printf("\nResult String: %s\n",output);
	convert_to_realchar(output);
}
void convert_to_realchar(char* string){
	char output[LIMIT];
	uint8_t i=0,j=0;
	while(string[i]!='\0'){
		switch(string[i]){

			case '\\':
				i++;
				if(string[i]=='t'){
					output[j]='\t';
				}else if(string[i]=='n'){
					output[j]='\n';
				}else{
					i--;
					output[j]='\\';
				}
				break;
			default:
				output[j]=string[i];
				break;
		}
		i++;
		j++;
	}
	printf("Result String:%s",output);
}
