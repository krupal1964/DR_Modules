
/* Author: Krupal Vachhani(166883)
 * Created: 10 Feb ,2025
 */

// Header Files
#include <ctype.h>
#include <stdint.h>
#include "../include/header2.h"

void sequeeze(char s1[],const char s2[]){
        uint8_t i,j,k=0;
	for(i=0;s1[i]!='\0';i++){
		for(j=0;s2[j]!='\0';j++){
			if(tolower(s1[i])==tolower(s2[j])){
				break;
			}
		}
		if(s2[j]=='\0'){
			s1[k++]=s1[i];
		}
	}
	s1[k]='\0';
}
