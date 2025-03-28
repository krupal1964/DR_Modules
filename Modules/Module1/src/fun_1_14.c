/*
 *created: 31 Jan,2025
 *author: Krupal Vachhani(166883)
 */

#include "../include/header1.h"
#include <stdio.h>

// count frequency of each character and store into array
void fun_1_14(){
    int c;
    int frq[128]={0}; 
    printf("Enter text:\n");
 
    while ((c = getchar()) != EOF) {
 	frq[c]+=1;
    }

    for(int i=0;i<128;i++){
	    if(frq[i]!=0){
		 print((char)i,frq[i]);
           }
    }
    printf("\n");
}

// print * as per frequency
void print(char c,int n){
	if( c == '\t'){
        	printf("\n \\t :");
        } else if ( c == '\n'){
                printf("\n \\n :");
        } else if ( c == ' '){
                printf("\n \\s :");
        } else{
                printf("\n %c :",c);
        }
	while(n>0){
	        printf("* ");
		n--;
	}
}
