/*
 * Author: Krupal Vachhani(166883)
 * Date: 18 March,2025
 */

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "../include/header5.h"
#define MAXLINES 5000   /* max #lines to be sorted */
 
char *lineptr[MAXLINES];
char linestor[MAXLINES];


void fun_5_7(){
	call_r();
}

int call_r()
{
        int nlines; /* number of input lines read */
        if ((nlines = readlines(lineptr, linestor, MAXLINES)) >= 0)
        {
                qsort1(lineptr, 0, nlines - 1);
                writelines(lineptr, nlines);
                return 0;
        }
        else
        {
                printf("error: input too big to sort \n");
                return 1;
        }
}

#define MAXLEN 1000 /* max length of any input line */
#define MAXSTOR 5000


/* readlines: read input lines */

int readlines(char *lineptr[],char *linestor,int maxlines)
{
        int len,nlines = 0;
        char i_line[MAXLEN] ,c;
        char *p = linestor;
        char *linestop = linestor + MAXSTOR;

    loop:
        while((len=line(i_line,MAXLEN)) > 0)
                if(nlines >= maxlines || p+len > linestop)
                        return -1;
                else
                {
                        i_line[len-1] = '\0';
                        strcpy(p,i_line);
                        lineptr[nlines++]=p;
                        p+=len;
                        printf("get a newline? 0 for no, ENTER to input next line.");
                        c = getchar();
                        if(c != '0')
                                goto loop;
                        else if(c == '0')
                                return nlines;
                }
        return 0;

}


/* writelines: write output lines */

void writelines(char *lineptr[], int nlines)
{
        int i;
        for (i = 0; i < nlines; i++)
                printf("%s\n", lineptr[i]);
}

/* qsort: sort v[left] ... v[right] into increasing order */

void qsort1(char *v[], int left, int right)
{
        int i, last;
        if (left >= right)
                return;
        swapp(v, left, (left + right) / 2);
        last = left;
        for (i = left + 1; i <= right; i++)
                if (strcmp(v[i], v[left]) < 0)
                        swapp(v, ++last, i);
        swapp(v, left, last);
        qsort1(v, left, last - 1);
        qsort1(v, last + 1, right);
}


/* swap: interchange v[i] and v[j] */

void swapp(char *v[], int i, int j)
{
        char *temp;
        temp = v[i];
        v[i] = v[j];
        v[j] = temp;
}
