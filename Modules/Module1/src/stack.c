#include "../include/stack.h"
#include <stdio.h>
#include <stdbool.h>
void create(stack *s){
	s->top=-1;
	printf("created satck\n");
}

char pop(stack *s){
	if(s->top==-1){
		printf("Stack is Underflow\n");
		return -1;
	}
	return s->item[s->top--];
}

void push(stack *s,char ele){
	if(s->top==SIZE-1){
		printf("Stack is Overflow\n");
		return;
	}
	s->top++;
	s->item[s->top]=ele;
}

void printstack(stack *s){
        printf("print stack...\n");
	for(int i=0;i<=s->top;i++){
		printf("%c ",s->item[i]);
	}
	printf("\n");
}

bool isempty(stack *s){
	if(s->top==-1){
		return true;
	}
	return false;
}
