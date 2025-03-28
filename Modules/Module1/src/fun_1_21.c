/*
 *created: 6 Feb,2025
 *author: Krupal Vachhani(166883)
*/

#include "../include/header1.h"
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

void fun_1_21(){
	uint8_t s_count=0;
	char c;
	//status for continuous space
	bool status=false;
	while((c=getchar())!=EOF){
		if(c==' '){
			if(status){
				s_count++;
				if(s_count==4){
					putchar('\t');
					s_count=0;
				}
			}else{
				s_count=1;
				status=true;
			}
		}else{
			while(s_count>0){
				putchar(' ');
				s_count--;
			}
			putchar(c);
			status=false;
		}
	}
}

