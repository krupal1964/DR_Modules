/* Author: Krupal Vahhani
 * created:17 Feb,2025
 */

#include <stdio.h>
#include <stdint.h>
#include "../include/header1.h"

/* 
 *
 * Program to remove comments from a C Program.
 *
 * Program should echo quotes and character constants properly C comments do not nest
 *
 */

void remove_comments(FILE *input, FILE *output){
	char ch,next;
	int in_string=0;
	while((ch = fgetc(input)) != EOF){

		if(ch == '"'){
			in_string=!in_string;
			fputc(ch,output);
		}

		else if(!in_string && ch=='/'){
			next = fgetc(input);

			//single line comment
			if(next == '/'){
				while( (ch=fgetc(input)) != EOF && ch != '\n');
				fputc('\n',output);
			}

			//multi line comment
			else if(next == '*'){
				while( (ch=fgetc(input)) != EOF){
					if(ch == '*' && (next=fgetc(input)) == '/')
						break;
				}
			}

			else{
				fputc(ch, output);
				fputc(next, output);
			}
		}

		else{
			fputc(ch, output);
		}

	}
}

void fun_1_23(){
	FILE *input = fopen("/home/krupal/empty.c","r");
	FILE *output = fopen("/home/krupal/empty1.c","w");

	if (input == NULL || output == NULL){
	       printf("Error opening file \n");
       		return;
	}
	remove_comments(input, output);
	fclose(input);
	fclose(output);
}






