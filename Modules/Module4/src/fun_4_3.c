/*
 * Author: Krupal Vachhani
 * Created: 24 Feb,2025
 */

#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include "../include/header4.h"
#include "../include/stack.h"

void fun_4_3(){
    int32_t type;
    double op2;
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
                float divisor = pop();
                if (divisor != 0.0){
		    float dividend = pop();
		    int quotient = floor(dividend / divisor);  /* Get the quotient, truncating towards zero */
                    int remainder = dividend - quotient * divisor; /* Remainder as Dividend - (Quotient * Divisor)*/
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
