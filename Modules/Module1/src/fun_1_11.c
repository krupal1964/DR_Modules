/*
 *created: 31 Jan,2025
 *author: Krupal Vachhani(166883)
 */

#include "../include/header1.h"
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
// count line word & character
void fun_1_11(){
    uint16_t nl, nw, nc;
    bool state;
    char c;
 
    state = false; // Start in the OUT state
    nl = nw = nc = 0; // Initialize counters to 0
 
    printf("Enter text:\n");
 
    while ((c = getchar()) != EOF) {
        nc++; // Increment character count
 
        // Check for newline
        if (c == '\n') {
            nl++; // Increment line count
        }
 
        // Check for whitespace (space, tab, newline)
        if (c == ' ' || c == '\n' || c == '\t') {
            state = false; // Set state to OUT (not in a word)
        } else if (state == false) {
            state = true;  // Set state to IN (inside a word)
            nw++;       // Increment word count
        }
    }
 
    // Print the results
    printf("Lines: %d\n", nl);
    printf("Words: %d\n", nw);
    printf("Characters: %d\n", nc);

}
