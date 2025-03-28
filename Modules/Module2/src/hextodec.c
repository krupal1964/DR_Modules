/* Author: Krupal Vachhani(166883)
 * Created: 10 Feb ,2025
 */

// Header Files
#include <stdio.h>
#include <stdint.h>
#include "../include/header2.h"
#define BASE 16

int64_t htoi (char hex_number[],int length){
	uint8_t e_index=0;
	uint32_t num,pow=1;
	int64_t result=0;	
	if(hex_number[e_index]==0 && (hex_number[e_index+1]=='x' || hex_number[e_index+1]=='X')){
		e_index=2;
	}
	for(int i=length-1;i>=e_index;i--){
		if(hex_number[i]>='0' && hex_number[i]<='9'){
			num = hex_number[i] - '0';	
		}else if(hex_number[i]>='a' && hex_number[i]<='f'){
			num = hex_number[i] - 'a' + 10;
		}else if(hex_number[i]>='A' && hex_number[i]<='F'){
                        num = hex_number[i] - 'A' + 10;
                }
		//printf(
		result += num*pow;
		pow*=BASE;
	}
	return result;
}
