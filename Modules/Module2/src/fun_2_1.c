
/* Author: Krupal Vachhani(166883)
 * Created: 10 Feb ,2025
 */

// Header Files
#include <stdio.h>
#include <limits.h>
#include <float.h>
#include "../include/header2.h"

void fun_2_1(){
	// Print Various Range of different data type

	//Signed Range
	printf("Signed Char %d to %d\n", SCHAR_MIN,SCHAR_MAX);
	printf("Signed ShortInt %d to %d\n", SHRT_MIN,SHRT_MAX);	
	printf("Signed Int %d to %d\n", INT_MIN,INT_MAX);
	printf("Signed LongInt %ld to %ld\n", LONG_MIN,LONG_MAX);
	printf("Float %e to %e\n", FLT_MIN,FLT_MAX);

	//Unsigned Range
	printf("UnSigned Char 0 to %u\n",UCHAR_MAX);
        printf("UnSigned ShortInt 0 to %u\n", USHRT_MAX);
        printf("UnSigned Int 0 to %u\n",UINT_MAX);
        printf("UnSigned LongInt 0 to %lu\n", ULONG_MAX);
}
