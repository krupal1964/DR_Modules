/*
 * Author: Krupal Vachhani
 * Created: 1 March,2025
 */

#include <stdio.h>
#include <stdint.h>
#include "../include/header4.h"
char buff =0;
int getch_4_9(){
        int32_t c;

        if(buff != 0)
                c = buff;
        else
                c=EOF;
                //c = getchar();

        buff= 0;
        return c;
}

void ungetch_4_9(int32_t c){
        if(buff != 0)
                printf("ungetch: too many characters\n");
        else
                buff = c;
}

void fun_4_9(){
        char c;
        c=getchar();

	if(c==EOF)
		printf("eof encountered\n");

	ungetch_4_9(c);

        while((c=getch_4_9()) != EOF)
                putchar(c);
        return;
}
