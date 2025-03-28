/* Purpose: set n bit at position p
 * Author: Krupal Vachhani(166883)
 * Created: 12 Feb ,2025
 */

// Header Files
#include <stdio.h>
#include <stdint.h>
#include "../include/header2.h"

void fun_2_7(){
	int16_t x;
	uint16_t p,n;
	printf("Enter x:");
	scanf("%hd",&x);
	printf("Enter p:");
        scanf("%hd",&p);
	printf("Enter n:");
        scanf("%hd",&n);

	if(x<0){
                printf("Enter Positive Value");
        }

	if(n>p+1){
		printf("Insufficient bit");
		return;
	}

	//Create Mask for clear n bits at position in x
	uint8_t mask = ~(~0 << n) << (p+1-n);
	printf("Mask: %d\n",mask);
	
	//clear n bit at position p
	x= x ^ mask;

	printf("%d\n",x);
}
