/*
 *created: 31 Jan,2025
 *author: Krupal Vachhani(166883)
 */

#include "../include/header1.h"
#include <stdio.h>

// print '\b' & '\t' & '\' 
void fun_1_10(){
	char ip;
	while((ip=getchar())!=EOF){
		if(ip=='\b'){
			printf("\\b");
		}
		else if(ip=='\t'){
			printf("\\t");
		}
		else if(ip=='\\'){
			printf("\\\\");
		}
		else{
			putchar(ip);
		}

	}
}
