
/* Author: Krupal Vachhani(166883)
 * Created: 10 Feb ,2025
 */

// Header Files
#include <stdio.h>
#include <stdint.h>
#include "../include/header4.h"

int mline(char input[],int lim){
	uint8_t i;
	char c;

	for(i=0;i<lim-1;i++)
	{	
		c=getchar();
		if(c==EOF){
			break;
		}
		input[i]=c;
	}
	input[i]='\0';
	return i;
}

int line(char input[],int lim){
        uint8_t i;
        char c;

        for(i=0;i<lim-1;i++)
        {
                c=getchar();
                if(c=='\n' || c==EOF){
                        break;
                }
                input[i]=c;
        }
	if(c=='\n')
		input[i++]=c;
        input[i]='\0';
        return i;
}
