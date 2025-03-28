/* Author: Krupal Vahhani
 * created:6 Feb,2025
 */

#include <stdio.h>
#include <stdint.h>
#include "../include/header1.h"
#define LIMIT 100

void fun_1_22(){
	char c,prev;
	char word[LIMIT];
	int8_t check_i=0,breakpoint,print_i=0,length=0;
	printf("Enter breakpoint length:");
	scanf("%hhd",&breakpoint);
	while((c=getchar())!=EOF){
		if(check_i==LIMIT-1){
			printf("LIMIT REACH");
			break;
		}else{
			word[check_i++]=c;
		}
	}
	word[check_i]='\0';
	length=check_i;
	check_i=0;
	uint8_t count=0;
	//run upto length
	while(length>print_i){
		// if breakpoint reach or end of input
		if(count>breakpoint || word[check_i]=='\0'){
 			while(check_i>print_i && word[check_i]!=' ' && word[check_i]!='\t'){
				check_i--;
			}
			if(check_i==print_i){
                        	check_i=print_i+breakpoint;
                                if(check_i>length){
                                	check_i=length;
                        	}
                        }
			//print
			for(int i=print_i;i<check_i;i++){
				putchar(word[i]);
			}
			putchar('\n');
			count=0;			
			print_i=check_i;
		}else{
			count++;
			check_i++;
		}
	}
}

