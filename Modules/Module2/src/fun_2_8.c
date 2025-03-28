/* Purpose: circular right shift
 * Author: Krupal Vachhani(166883)
 * Created: 13 Feb ,2025
 */

// Header Files
#include <stdio.h>
#include <stdint.h>
#include "../include/header2.h"

void fun_2_8(){
        uint16_t x,n;
        printf("Enter x:");
        scanf("%hd",&x);
        printf("Enter n:");
        scanf("%hd",&n);

	//if we have more than 16 shifts
	n=n%16;

        //get lsat n bits from x
        uint16_t lastnbits = ~(~0 << n) & x;
//      printf("Last: %d\n",lastnbits);
	
	//transfer at position
	lastnbits=lastnbits << (16-n);
//	printf("Shift to leftmost: %d\n",lastnbits);

        //move x to n bits
        x=x>>n;
//	printf("x after shift: %d\n",x);
	x=x|lastnbits;

        printf("Value after shift:%d\n",x);
}
