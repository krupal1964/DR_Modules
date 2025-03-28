/* Author: Krupal Vahhani
 * created:18 Feb,2025
 */

#include <stdio.h>
#include <stdint.h>
#include "../include/header1.h"
#include "../include/stack.h"

void fun_1_24(){

	//create stack
	stack s;
	create(&s);
	
	//take file
	FILE *input = fopen("/home/krupal/review.c","r");

        if (input == NULL){
               printf("Error opening file \n");
                return;
        }
    	
	char ch;
	int str_status=0;
        while((ch = fgetc(input)) != EOF){
		if(ch == '['){
			push(&s,'[');
		}else if(ch == '{'){
			push(&s,'{');
		}else if(ch == '('){
			push(&s,'(');
		}
		else if(ch == '"'){
			if(!str_status){
				push(&s,'"');
			}else{
				if( pop(&s) != '"'){
					break;
				}
			}
			str_status = !str_status;
		}
		else if(ch == ')'){
			if( (ch=pop(&s)) != '(' ){
				break;
			}
		}
		else if(ch == '}'){
                        if( (ch=pop(&s)) != '{' ){
                                break;
                        }
                }
		else if(ch == ']'){
                        if( (ch=pop(&s)) != '[' ){
                                break;
                        }
                }
        }
	if(!isempty(&s)){
		printf("Not matched error\n");
		printf("Unmatched is %c\n",ch);
	}else{
		printf("sucessful matched\n");
	}

        fclose(input);

        return;
	
}
