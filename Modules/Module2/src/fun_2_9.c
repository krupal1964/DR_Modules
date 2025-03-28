/* Purpose: circular right shift
 * Author: Krupal Vachhani(166883)
 * Created: 13 Feb ,2025
 */

// Header Files
#include <stdio.h>
#include <stdint.h>
#include "../include/header2.h"

void fun_2_9(){
        uint16_t x,b;
        printf("Enter x:");
        scanf("%hd",&x);

	for(b=0;x!=0;x&=x-1){
		++b;
	}

        printf("Number of 1's:%d\n",b);
}
