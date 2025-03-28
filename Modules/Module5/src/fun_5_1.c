#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "../include/header5.h"
#include<ctype.h>
#define  SIZE 100 
#define BUFSIZE 100
 
char buf[BUFSIZE];
int bufp = 0;

//used to get char from buffer if exist or from direct i/p stream 
int getch1(void)
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}
 
//function to put the char to i/p buffer
void ungetch1(int c)
{
    if (bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}

int getint(int *pn)
{
    int8_t c, sign;

    while (isspace(c = getch1()));

    if (!isdigit(c) && c != EOF && c != '+' && c != '-')
    {
        ungetch1(c);  // it's not a number
        return -1;   // -1 will end the program directly
    }

    sign = (c == '-') ? -1 : 1;

    if (c == '+' || c == '-')
        c = getch1();
    // avoids to treat a '+' or '-' not followed by a digit as a valid representation of zero
    if (!isdigit(c))
        return 0;
    for (*pn = 0; isdigit(c); c = getch1())
        *pn = 10 * *pn + (c - '0');

    *pn *= sign;

    if (c != EOF)
        ungetch1(c);

    return c;
}

void fun_5_1(){
	int n,array[SIZE];

	for(n=0;n<SIZE; n++){
		int32_t result=getint(&array[n]);
		if(result==0){
			printf("Invalid Entry\n");
		}
		else if(result==EOF)
			break;
		else
			printf("%d\n",array[n]);
	}

	putchar('\n');
}

