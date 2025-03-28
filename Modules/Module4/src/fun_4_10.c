/*
 * Author: Krupal Vachhani
 * Created: 3 March,2025
 */

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <math.h>
#include "../include/header4.h"
#include "../include/stack.h"

void fun_4_10(){	
    int32_t type;
    double op2;
    char s[MAXOP];

    while ((type = getop_4_10(s)) != EOF) {
        switch (type) {
            case NUMBER:
                push(atof(s));
                break;
            case '+':
                push(pop() + pop());
                break;
            case '*':
                push(pop() * pop());
                break;
            case '-':
                op2 = pop();
                push(pop() - op2);
                break;
            case '/':
                op2 = pop();
                if (op2 != 0.0)
                    push(pop() / op2);
                else
                    printf("error:zero divisor\n");
                break;
	    case '%':
                float divisor = pop();
                if (divisor != 0.0){
                    float dividend = pop();
                    int quotient = floor(dividend / divisor);
                    int remainder = dividend - quotient * divisor;
                    push(remainder);
                }
                else
                    printf("erro:zero divisor\n");
                break;
            case '\n':
                printf("\t%.8g\n", pop());
                break;
            default:
                printf("error: unknown command %s\n", s);
                break;
        }
    }
}

#include<ctype.h>
#define MAXLINE 100
int32_t li=0;
char l[MAXLINE];

int getop_4_10(char s[]){
	int32_t c,i;
	
	if(l[li] == '\0')
		if (line(l,MAXLINE) == 0)
			return EOF;
		else
			li = 0;

	while ((s[0] = c = l[li++]) == ' ' || c == '\t');

	s[1] = '\0';

	if(!isdigit(c) && c!='.' && c!='-')
		return c;

	i=0;
	if(c == '-')
		s[++i] = c = l[li++];
	if (isdigit(c))
		while (isdigit(s[++i] = c = l[li++]));
	if (c == '.')
		while (isdigit(s[++i] = c = l[li++]));

	s[i] = '\0';

	li--;

	return NUMBER;
}
