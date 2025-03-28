/*
 * Author: Krupal Vachhani
 * Created: 24 Feb,2025
 */

#define MAXOP 100
#define NUMBER '0'
#define NAME 'n'
#define BUFSIZE 100

#define MAXVAL 100

int getch(void);

void ungetch(int);

int getop(char[]);

void push(double);

double pop(void);

//for 4.4
void clearsp(void);
double top(void);

//for 4.5
void mathfunc(char[]);

//for 4.7
void ungets(char[]);
