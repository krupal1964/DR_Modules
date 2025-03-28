
#ifndef STACK_H
#define STACK_H
#define SIZE 20
#include <stdbool.h>
typedef struct{
	char item[SIZE];
	int top;
}stack;
void push( stack *s, char ele);
char pop( stack *s);
void create( stack *s);
void printstack( stack *s);
bool isempty( stack *s);
#endif
