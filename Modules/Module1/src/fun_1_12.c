/*
 *created: 31 Jan,2025
 *author: Krupal Vachhani(166883)
 */

#include "../include/header1.h"
#include <stdio.h>
#include <stdbool.h>

// count line word & character
void fun_1_12(){
    char c;
    bool status=false;
 
    printf("Enter text:\n");
 
    while ((c = getchar()) != EOF) {
 
        // Check for whitespace (space, tab, newline)
        if (c == ' ' || c == '\n' || c == '\t') {
            if(status){
		printf("\n");
	    }
	    status=false;
        } else {
	    status=true;
	    putchar(c);
        }

    }
}
