#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"../include/header5.h"
#define MAXSIZE 100

void fun_5_5(){

    char dest[]="hello world";
    char source[]="hie";

    mystrncpy(dest,source,2);
    printf("%s\n",dest);

    char s1[]= "hello";
    char t1[]= "world";
    char *d;

    /* We store the result in a new string d */

    if ((d = (char *) malloc(sizeof(char) * (strlen(s1) + 5 + 1))) == NULL) {
            printf("unable to allocate memory \n");
            return;
        }

    mystrncat(s1,t1,d, 5);
    printf("%s\n", d); /* ABCDEFGH */

    free(d);

    char s2[]= "hello";
    char t2[]= "hi";
    int result;

    result = mystrncmp(s2,t2,1);

    printf("%d\n", result);

    return;
}

void mystrncat(char *str1, char *str2, char *dest, int n) {
    while(*str1) {
        *dest++ = *str1++;
    }

    while(n-- >0) {
        *dest++ = *str2++;
    }

    *dest = '\0';
}

void mystrncpy(char *dest,char *source,int n)
{
    while(*source && n-- > 0)
        *dest++ = *source++;

    while (*dest) {
        *dest++;
    }

    *dest='\0';
}

/* mystrcmp: return <0 if s <t , 0 if s==t, > 0 if s > t */
int mystrncmp(char *lhs,char *rhs, int n)
{
    for(; *lhs == *rhs; lhs++,rhs++)
        if( *lhs == '\0' || --n <=0)
            return 0;
    return *lhs - *rhs;

}


int mystrnlen(char *s) {
    char *p = s;
    while (*s != '\0') {
        s = s + 1;
    }
    return s - p;
}
