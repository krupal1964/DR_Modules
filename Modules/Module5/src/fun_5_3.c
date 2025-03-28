/* Author: Krupal Vachhani
 * Date 11 March,2025
 */

#include <stdio.h>
#include <stdint.h>
#include "../include/header5.h"
 
//concat two string
void strcat2(char* s, char* t)
{
        while (*s != '\0')
           s++;
        s--;             // escaping last null character
        while ((*s = *t) != '\0')
        {
                s++;
                t++;
        }
}

void fun_5_3(){
	char s[MAXLENGTH], t[MAXLENGTH];

	putchar('s');
	putchar(':');
	line(s, MAXLENGTH);

	putchar('t');
        putchar(':');
        line(t, MAXLENGTH);

	strcat2(s, t);

	printf("%s", s);
}
