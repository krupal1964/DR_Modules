/*
 *created: 6 Feb,2025
 *author: Krupal Vachhani(166883)
*/

#include "../include/header1.h"
#include <stdio.h>
#include <stdint.h>

void fun_1_20(){
	char curr,prev;
	while((curr=getchar()) != EOF){
		if(curr == '\t'){
			printf("****");
		}else if (curr == ' '){
			if(prev != ' '){
				putchar(curr);
			}
		}else{
			putchar(curr);
		}
		prev=curr;
	}	
}
