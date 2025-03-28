/*
 * Author: Krupal Vachhani
 * Created: 24 Feb,2025
 */

#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <stdint.h>
#include "../include/header4.h"
#include "../include/stack.h"

void fun_4_4(){
    int type;
    double op2,op1;
    char s[MAXOP];

    while ((type = getop(s)) != EOF) {
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
                op2 = pop();
                if (op2 != 0.0)
                    push(fmod(pop(), op2));
                else
                    printf("erro:zero divisor\n");
                break;

	   //Extended Code
	    case '?':
		op2 = top();
		printf("\t%.8g\n",op2);
		break;
	    case 'c':
		clearsp();
		break;
	    case 'd':
		op2 = pop();
		push(op2);
		push(op2);
		break;
	    case 's':
		op1 = pop();
		op2 = pop();
		push(op1);
		push(op2);
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

