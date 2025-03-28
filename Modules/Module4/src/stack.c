/*
 * Author: Krupal Vachhani
 * Created: 24 Feb,2025
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include "../include/stack.h"
int sp = 0;
int bufp = 0;

double val[MAXVAL];
char buf[BUFSIZE];

void push(double f) {
    if (sp < MAXVAL)
        val[sp++] = f;
    else
        printf("error:stack full, cant push %g\n", f);
}

double pop(void) {
    if (sp > 0)
        return val[--sp];
    else {
        printf("error: stack empty\n");
        return 0.0;
    }
}

int getop(char s[]) {
    int i, c;
	
    while ((s[0] = c = getch()) == ' ' || c == '\t');
    s[1] = '\0';

    i=0;
    if(islower(c)){
	while (islower(s[++i] = c = getch()));
	s[i] = '\0';
	if( c != EOF)
		ungetch(c);
	if (strlen(s) > 1)
		return NAME;
	else
		return s[0];
    }

    if (!isdigit(c) && c != '.' && c != '-')
        return c; // not a number

    if (c == '-' || isdigit(c)) // collect integer part along with '-'
        while (isdigit(s[++i] = c = getch()));
    if (c == '.') // collect fraction part
        while (isdigit(s[++i] = c = getch()));
    s[i] = '\0';
    if (c != EOF)
        ungetch(c);
    if (strcmp(s, "-") == 0)
        return '-';
    return NUMBER;
}

void ungetch(int c) {
    if (bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}

int getch(void) { return (bufp > 0) ? buf[--bufp] : getchar(); }

//for question 4.4
void clearsp(void){ sp = 0; }
double top(void){ return val[sp-1]; }

//for question 4.5
void mathfunc(char s[]){
	double op2;
	if(strcmp(s,"sin")==0)
		push(sin(pop()));
	else if(strcmp(s,"cos")==0)
		push(cos(pop()));
	else if(strcmp(s, "exp")==0)
		push(exp(pop()));
	else if(strcmp(s, "pow")==0){
		op2=pop();
		push(pow(pop(),op2));
	}
	else
		printf("error: %s is not supported\n",s);
}

//for question 4.7
void ungets(char s[]){
	int i;
	i=strlen(s);
	while (i > 0)
		ungetch(s[--i]);
}
