/* Purpose: set n bit at position p
 * Author: Krupal Vachhani(166883)
 * Created: 10 Feb ,2025
 */

// Header Files
#include <stdio.h>
#include <stdint.h>
#include "../include/header2.h"

void fun_2_6(){
	int16_t x,y;
	uint8_t p,n;
	printf("Enter x:");
	scanf("%hd",&x);
	printf("Enter y:");
        scanf("%hd",&y);
	printf("Enter p:");
        scanf("%hhd",&p);
	printf("Enter n:");
        scanf("%hhd",&n);

	if(x<0 || y<0){
		printf("Enter Positive Value");
	}

	if(n>p+1){
		printf("Insufficient bit");
		return;
	}

	//Create Mask for clear n bits at position in x
	uint8_t mask = (~0 << p+1) | ~(~0 << p+1-n);
//	printf("Mask: %d\n",mask);
	
	//clear n bit at position p
	x= x & mask;
//	printf("%d\n",x);

	//extract the n rightmost bit from y
	y= y & ~( ~0 << n);
//	printf("%d\n",y);

	//shift extracted bit to position p
	y = y << (p+1-n);
//	printf("%d\n",y);

	//set n bit to x from y
	x = x | y ;

	printf("%d\n",x);
}
