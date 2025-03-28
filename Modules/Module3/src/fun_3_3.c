/*
 *created: 17 Feb,2025
 *author: Krupal Vachhani(166883)
*/

#include "../include/header3.h"
#include <stdio.h>
#include <stdint.h>
#include<ctype.h>
#define LIMIT 100

void fun_3_3(){
	char input[LIMIT],output[LIMIT];

	//get input
	printf("Enter Range:");
	line(input,LIMIT);

	uint8_t i=0,j=0;

	while(input[i] != '\0'){
		if( input[i] == '-' && input[i+1]!= '\0'){
			if(i==0){
				i++;
				continue;
			}
			/* start range */
			char start=input[i-1];
			char end=input[i+1];
			
			/* exapand range and store it */
			if((isdigit(start) && isdigit(end) && start<=end)
			   || (islower(start) && islower(end) && start<=end)		
			   || (isupper(start) && isupper(end) && start<=end )){
				
				for(char c=start+1;c<=end;c++){
					output[j++]=c;
				}
				i++;
			}else if((isdigit(start) && isdigit(end) && start>end)
                           	 || (islower(start) && islower(end) && start>end)
                           	 || (isupper(start) && isupper(end) && start>end )){
				
				for(char c=start-1;c>=end;c--){
                                        output[j++]=c;
                                }
                                i++;
			}else{
				//preseve dash
				output[j++]=input[i];
			}
		}else{
			output[j++] = input[i];
		}
		i++;
	}
	output[j]='\0';

	//output
	printf("Output: %s\n",output);

}
