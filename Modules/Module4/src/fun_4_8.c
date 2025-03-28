/*
 * Author: Krupal Vachhani
 * Created: 1 March,2025
 */

#include <stdio.h>
#include <stdint.h>
#include "../include/header4.h"
char buffer =0;
int getch_4_8(){
	int32_t c;

	if(buffer != 0)
		c = buffer;
	else	
		c=EOF;
		//c = getchar();

	buffer= 0;
	return c;
}

void ungetch_4_8(int32_t c){
	if(buffer != 0)
		printf("ungetch: too many characters\n");
	else
		buffer = c;
}

void fun_4_8(){
	char c;
	scanf("%c",&c);
	ungetch_4_8(c);

	while((c=getch_4_8()) != EOF)
		putchar(c);
	
        return;
}
