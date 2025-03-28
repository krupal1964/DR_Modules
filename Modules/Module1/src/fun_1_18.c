/*
 *created: 6 Feb,2025
 *author: Krupal Vachhani(166883)
*/

#include "../include/header1.h"
#include <stdio.h>
#include <stdint.h>

void fun_1_18(){
    int c,state;

    state = 0; // Start in the OUT state

    printf("Enter text:\n");

    while ((c = getchar()) != EOF) {

        // Check for whitespace (space, tab, newline)
        if (c == ' ' || c == '\n' || c == '\t') {
            state = 1; // Set state to OUT (not in a word)
        } else if (state == 1) {
            state = 0;  // Set state to IN (inside a word)
            putchar(' ');
     	    putchar(c);
        } else{
		putchar(c);
	}
    }
}


