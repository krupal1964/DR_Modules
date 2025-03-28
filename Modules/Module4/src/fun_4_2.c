/*
 * Author: Krupal Vachhani
 * Created: 19 Feb,2025
 */

#include <stdio.h>
#include <stdint.h>
#include "../include/header4.h"
#include <ctype.h>
#define MAXLINE 100

//calculation power
int32_t power(int32_t base, int32_t exp){
	int32_t power;
	power=1;
	while ( exp-- > 0){
		power *= base;
	}
	return power;
}

double myatof(char s[]){
	double val, pow;
	int32_t sign, i, esign, exp;

	//ignor starting spaces
	for( i=0; isspace(s[i]); i++);

	//store the sign of number
	sign = (s[i] == '-') ? -1 : 1;
	
	//skip the sign index
	if (s[i] == '+' || s[i] == '-')
		i++;

	//calculate value before floating point
	for(val = 0.0;isdigit(s[i]);i++){
		val = 10.0 * val + (s[i] - '0');
	}
	
	if(s[i] == '.')
		i++;

	for (pow = 1.0;isdigit(s[i]);i++){
			val = 10.0 * val + (s[i] - '0');
			pow *= 10.0;
	}

	if (s[i] == 'e' || s[i] == 'E')
		i++;
	if (s[i] == '+' || s[i] == '-'){
		esign = s[i];
                i++;
	}
	
	for (exp=0; isdigit(s[i]); i++){
		exp = 10.0 * exp + (s[i] - '0');
	}

	if (esign == '-')
		return sign * (val/pow) / power(10 , exp);
	else
		return sign * (val/pow) * power(10 , exp);

}

void fun_4_2(){
	printf("Enter a input: ");
	char s[50];
	line(s,50);
	double ans=myatof(s);
	printf("Value is %f",ans);
}
