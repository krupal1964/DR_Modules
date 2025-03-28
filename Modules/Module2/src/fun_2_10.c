/* Purpose: circular right shift
 * Author: Krupal Vachhani(166883)
 * Created: 13 Feb ,2025
 */

// Header Files
#include <stdio.h>
#include "../include/header2.h"

void fun_2_10(){
	char c;
	printf("Enter input:");
	while ((c=getchar())!=EOF){
		c = c>='A' && c<='Z' ? c + 'a' - 'A' : c;
		putchar(c);
	}
}
