/*
 * Author: Krupal Vachhani
 * Created: 28 Feb,2025
 */

#include <stdio.h>
#include "../include/header4.h"
#include "../include/stack.h"
#include <stdint.h>
#define MAXLINE 100

void fun_4_7(){
	char l[MAXLINE];
	int32_t c;

	line(l,MAXLINE);

	ungets(l);
	
	while ((c = getch()) != EOF)
		putchar(c);

}
