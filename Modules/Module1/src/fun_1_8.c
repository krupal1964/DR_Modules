/*
 *created: 31 Jan,2025
 *author: Krupal Vachhani(166883)
 */

#include "../include/header1.h"
#include <stdio.h>

// count space tab & newline
void fun_1_8(){
	char ip;
	char s=0,t=0,n=0;
	while((ip=getchar())!=EOF){
		if(ip==' '){
			s++;
		}
		else if(ip=='\t'){
			t++;
		}
		else if(ip=='\n'){
			n++;
		}

	}
	printf("space:%d  tab:%d  newline:%d\n",s,t,n);
}
