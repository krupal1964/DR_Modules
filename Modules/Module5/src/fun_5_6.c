#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

#define NUMBER '0' /* signal that a number was found */
#define MAXVAL 100 /* maximum depth of val stack */
#define BUFSIZE 100
#define MAXLINE 1000
#define MAXOP 100

int getcha(void);
void ungetcha(int);
int getop(char *);
void push(double);
double pop(void);

int mgetline(char *line,int max);
int strindex(char *s,char *t);
int atoiv2(char *);
void itoav2(int n,char *s);
void reverse(char *);

int sp = 0;
int bufpointer = 0;
double val[MAXVAL];
char bufer[BUFSIZE];

void fun_5_6(void)
{
    char line[MAXLINE];

    int found=0;

    /* mgetline ends when a newline starts with X */
    while((mgetline(line,MAXLINE)) > 0)
	    printf("%s",line);
     

    char *s="-23";
    int ret;
    ret=atoiv2(s);
    printf("%d\n",ret);
/*
    *s="abc";
    ret=atoiv2(s);
    printf("%d\n",ret);
*/
    char s1[100];
    int i=12345;
    itoav2(i,s1);
    reverse(s1);
    printf("%s\n",s1); 

    char *s2="This is a line";
    char *t="is";
    ret=0;

    ret=strindex(s2,t);
    printf("%d\n",ret);

    int type;
    double op2;
    char s3[MAXOP];

    while((type = getop(s3)) != EOF)
    {
        switch(type)
        {
            case NUMBER:
                    push(atof(s3));
                    break;
            case '+':
                    push(pop() + pop());
                    break;
            case '*':
                    push(pop() * pop());
                    break;
            case '-':
                    op2 = pop();
                    push(pop() - op2);
                    break;
            case '/':
                    op2 = pop();
                    if( op2 != 0.0)
                        push(pop() / op2);
                    else
                        printf("error: zero divisor\n");
                    break;
            case '\n':
                    printf("\t%.8g\n",pop());
                    break;
            default:
                    printf("error: unknown command %s\n",s);
                    break;
        }
    }
    return;
}


int atoiv2(char *s)
{
    int n,sign;

    for(;isspace(*s);s++)   /* skip white space */
        ;
    sign = ( *s =='-')? -1:1;

    if(*s=='+' || *s=='-')
        s++;
    for(n=0;isdigit(*s);s++)
        n = 10 *n + *s - '0';
    
    return sign * n;
}

/* reverse polish calculator */

/* push: push f onto value stack */
void push(double f)
{
    if(sp < MAXVAL)
        val[sp++] = f;
    else
        printf("error: stack full,can't push %g\n",f);
}

/* pop: pop and return top value from stack */
double pop(void)
{
    if( sp > 0) 
        return val[--sp];
    else
    {
        printf("error: stack empty \n");
        return 0.0;
    }
}

/* getop: get next operator or numeric operand  pointer version */

/* getop */
int getop(char *s)
{
    int c;
    
    while((*s=c=getcha()) == ' ' || c == '\t')
        ;
    *(s+1) = '\0';

    if(!isdigit(c) && c!='.')
        return c;       /* not a number */
    if(isdigit(c))
    while(isdigit(*++s = c = getcha()))
        ;

    if(c == '.')
    while(isdigit(*++s = c = getcha()))
        ;

    *s = '\0';

    if(c != EOF)
        ungetcha(c);
    return NUMBER;
}

int getcha(void)
{
    return (bufpointer > 0) ? bufer[--bufpointer]:getchar();
}

void ungetcha(int c)
{
    if(bufpointer >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        bufer[bufpointer++]=c;
}

/* itoa */

void itoav2(int n,char *s)
{
    int sign;
    char *t=s;
    
    if((sign = n) < 0)
        n = -n;

    do
    {
        *s++ = n % 10 + '0';
    } while ((n /= 10) > 0);

    if(sign < 0)
        *s++ = '-';
    *s='\0';

}

/* reverse */

void reverse(char *s)
{
    int c;
    char *t;

    for(t=s+(strlen(s)-1);s<t;s++,t--)
    {
        c=*s;
        *s=*t;
        *t=c;
    }
}
/* mgetline */

int mgetline(char *s,int lim)
{
    int c;
    char *t=s;

    while(--lim > 0 && (c=getcha())!='X' && c!='\n')
        *s++=c;

    if(c=='\n')
        *s++=c;
    *s='\0';

    return s-t;
}

/* strindex */

int strindex(char *s,char *t)
{
    char *b=s;
    char *p,*r;

    for(;*s!='\0';s++)
    {
        for(p=s,r=t;*r!='\0' && *p==*r;p++,r++)
            ;

            if(r>t && *r == '\0')
                return s-b;
    }
    return -1;
}
