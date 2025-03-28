/* Author: Krupal Vachhani(166883)
 * Create: 11 March ,2025
 */

#include <stdio.h>
#include <stdint.h>
#include "../include/header5.h"
 
int8_t strend(char* s,char* t)
{
        int16_t count=0;
        while(*(t+(count)) != '\0')
                count++;
 
        while (*s != '\0')
            ++s;
        --s;
 
        while (*t != '\0')
            ++t;
        --t;
 
        while (count > 0)
        {
            if (*t == *s)
            {
                --t;
                --s;
                --count;
            }
            else
                return 0;
        }
        if (count == 0)
                return 1;
}

void fun_5_4(){
	char s[MAXLENGTH],t[MAXLENGTH];
	int ret;
	line(s,MAXLENGTH);
	line(t,MAXLENGTH);
	ret = strend(s,t);
	printf("%d",ret);
}
