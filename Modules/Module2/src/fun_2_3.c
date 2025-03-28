
/* Author: Krupal Vachhani(166883)
 * Created: 10 Feb ,2025
 */

// Header Files
#include <stdio.h>
#include <stdint.h>
#include "../include/header2.h"
#define LIMIT 10

void fun_2_3(){
	char line[LIMIT];
	printf("Enter Hexadecimal Number:");
	int length=getinput(line,LIMIT);
	for(int i=0;i<length;i++){
		if( !((line[i]>='0' && line[i]<='9') || (line[i]>='a' && line[i]<='f') || (line[i]>='A' && line[i]<='F') || (i==1 && (line[i]=='x' || line[i]=='X')) )) {
			printf("ERROR: INVALID INPUT");
			return;
		}
	}
	int64_t ans=htoi(line,length);
	printf("Your Decimal Number is: %ld\n",ans);
}
