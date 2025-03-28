/*
 * Author: Krupal Vachhani
 * Created: 24 Feb,2025
 */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdint.h>
#include "../include/header4.h"
#include "../include/stack.h"

void fun_4_6(){
    int32_t type,var;
    double op2,v;
    char s[MAXOP];
    double variable[26];

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
            case '=':
                pop();
                if (var >= 'A' && var <= 'Z')
                    variable[var -'A']=pop();
                else
                    printf("error:novariablename\n");
                break;
            case '\n':
		v=pop();
                printf("\t%.8g\n",v);
                break;
            default:
		if (type >= 'A' && type <= 'Z')
			push(variable[type - 'A']);
		else if (type == 'v')
			push(v);
		else
			printf("error: unknown command %s\n",s);
		break;
	}
	var=type;
    }
}
