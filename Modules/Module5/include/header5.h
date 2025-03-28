/*
 * Created: 10 March,2025
 * Author: Krupal Vachhani(16683)
 */

#ifndef HEADER5_H
#define HEADER5_H
#include <stdint.h>
#define MAXLENGTH 100

// declaration of DR_Module1 functions

//Practical1
void fun_5_1();

//Practical2
void fun_5_2();

//Practical3
void fun_5_3();
void strcat2(char* s, char* t);

//Practical4
void fun_5_4();
int8_t strend(char* s,char* t);

//Practical5
void fun_5_5();
void mystrncpy(char *,char *,int);
void mystrncat(char *, char *, char *, int);
int mystrncmp(char *, char *, int);
int mystrnlen(char *s);

//Practical6
void fun_5_6();
	
//Practical7
void fun_5_7();
int call_r();
int readlines(char *lineptr[],char *linestor,int maxlines);
void writelines(char *lineptr[], int nlines);
void qsort1(char *v[], int left, int right);
void swapp(char *v[], int i, int j);

//Practical8
void fun_5_8();
int day_of_year(int year,int month,int day);                                                                          void month_day(int year,int yearday);

//Practical9
void fun_5_9();
int day_of_year2(int,int ,int);
void month_day2(int,int, int * ,int *);

//Practical10
void fun_5_10();

//Practical11
void fun_5_11();

//Practical12
void fun_5_12();

//Practical13
void fun_5_13();

//Practical14
void fun_5_14();

//extra function
int line(char*,int);
int mline(char*,int);
#endif
