/* Rewrite the temperature conversion program to use a function for conversion.  
 * Author: Krupal Vachhani
 * Created:6 Feb,2025
 */

#include <stdio.h>
#include <stdint.h>
#include "../include/header1.h"

void fun_1_15()
{
	float feh,cel;
	char choice;
	printf("Enter your choice:\n 1.Celcius to farenheit\n 2.Farenheit to celcius\n");
	scanf("%c",&choice);
	switch(choice)
	{
		case '1':
			printf("Enter celcius: \n");
			if(scanf("%f",&cel))
			printf("Farenheit is %f",c_to_f(cel));
			else
			printf("Enter proper digit");
			break;
		case '2':
			printf("Enter farenheit: \n");
                        if(scanf("%f",&feh))
                        printf("Celcius is %f",f_to_c(feh));
			else
			printf("Enter proper digit");
			break;
		default:
			printf("Enter proper choice");
	}
}
