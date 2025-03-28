#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "../include/header5.h"
#include <ctype.h>
#define MAXSIZE 10
#define BUFFERSIZE 100

char buffer[BUFFERSIZE];
int bufferp = 0;

//used to get char from buffer if exist or from direct i/p stream
int getch(void)
{
    return (bufferp > 0) ? buffer[--bufferp] : getchar();
}

//function to put the char to i/p buffer
void ungetch(int c)
{
    if (bufferp >= BUFFERSIZE)
        printf("ungetch: too many characters\n");
    else
        buffer[bufferp++] = c;
}

int getfloat(float *pn)
{
    int c, sign;
    float power;
 
    while (isspace(c = getch()));
 
    if (!isdigit(c) && c != EOF && c != '+' && c != '-' && c != '.')
    {
        ungetch(c);
        return -1;
    }
 
    sign = (c == '-') ? -1 : 1;
 
    if (c == '+' || c == '-')
        c = getch();
 
    for (*pn = 0.0; isdigit(c); c = getch())
        *pn = 10.0 * *pn + (c - '0');
    if (c == '.')
        c = getch();
 
    for (power = 1.0; isdigit(c); c = getch())
    {
        *pn = 10.0 * *pn + (c - '0');    /* fractional part */
        power *= 10.0;
    }
 
    *pn *= sign / power;
 
    if (c != EOF)
        ungetch(c);
 
    return c;
}

void fun_5_2(){
        int n;
	float array[MAXSIZE];

        for(n=0;n<MAXSIZE && getfloat(&array[n]) !=EOF; n++){
                printf("%f\n",array[n]);
        }

        putchar('\n');
}
