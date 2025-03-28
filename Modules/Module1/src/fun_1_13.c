/*
 *created: 31 Jan,2025
 *author: Krupal Vachhani(166883)
 */

#include "../include/header1.h"
#include <stdio.h>
#include <stdint.h>

// count line word & character
void fun_1_13(){
    char c;
    int32_t arr[10]={0};
    int32_t count=0,max=0;
 	
    printf("Enter text:\n");
 
    while ((c = getchar()) != EOF) {
        // Check for whitespace (space, tab, newline)
        if (c == ' ' || c == '\n' || c == '\t') {
            if(count>9)
		count=0;
	    if(count>max)
                max=count;
	    arr[count]++;
	    count=0;
        } else {
	    count++;
	}
    }

    //check for last word
    if(count!=0){
	    if(count>9)
		    count=9;
	    if(count>max)
		    max=count;
	    arr[count]++;
    }

    // Horizontal Histogram
    printf("\n\nHorizontal HistoGram\n");
    int32_t i=max;
    while(i>0){
	    int32_t nstar=arr[i];
	    printf("%d |",i);
	    while(nstar>0){
		    printf("* ");
		    nstar--;
	    }
	    printf("\n");
	    i--;
   }

   //Vertical Histogram
   printf("\n\nvertical Histogram\n");
   int32_t maxcount=0;
   i=max;
   while(i>0){
	   if(arr[i]>maxcount)
		   maxcount=arr[i];
	   i--;
   }

   while(maxcount>0){
	   i=max;
	   while(i>0){
		   if(arr[i]>=maxcount){
			   printf("* ");
	           }else{
			   printf("  ");
	           }
		   i--;
           }
	   printf("\n");
	   maxcount--;
  }

  i=max;
  while(i>0){
	  printf("--");
	  i--;
  }
  printf("\n");

  i=max;
  while(i>0){
	  printf("%d ",i);
	  i--;
  }

}

