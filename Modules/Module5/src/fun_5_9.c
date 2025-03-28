/* Authore: Krupal Vachhani(166883)
 * Date: 18 March,2025
 */

#include<stdio.h>
#include "../include/header5.h"

static char daytab[2][13]={
    {0,31,28,31,30,31,30,31,31,30,31,30,31},
    {0,31,29,31,30,31,30,31,31,30,31,30,31}
};


void fun_5_9()
{
    int da,mo,ye,dat,c;
    while(c){
        printf("1. DATE to DAY       2. DAY to DATE\n");
        printf("Enter your choice:");
        scanf("%d",&c);
        switch(c){
                case 1:
                        printf("Enter year:");
                        scanf("%d",&ye);
                        printf("Enter month:");
                        scanf("%d",&mo);
                        printf("Enter day:");
                        scanf("%d",&dat);
                        da=day_of_year2(ye,mo,dat);
                        if(da!=-1)
                                printf("day is of the year is %d\n",da);
                        else
                                printf("Invalid input\n");
                        break;
                case 2:
                        printf("Enter year:");
                        scanf("%d",&ye);
                        printf("Enter no of days:");
			int noofdays;
                        scanf("%d",&noofdays);
                        month_day2(ye,noofdays,&mo,&da);
			if(mo!=-1 && da!=-1){
				printf("Month:%d  Day:%d\n",mo,da);
			}else{
				printf("Invalid Input\n");
			}
                        break;
                default:
                        printf("Invalid choice\n");
                        return;
        }
    }
}

/* day_of_year: set day of year from month & day */

int day_of_year2(int year,int month,int day)
{
    int i,leap;

    leap = (year % 4 == 0 && year%100 != 0 || year%400) == 0;
    if (year < 1 || month < 1 || month > 12 || day < 1 || day > daytab[leap][month]) {
            return -1;
     }

    char *ptr = &daytab[leap][1];

    for (char *end = ptr + month - 1; ptr < end; ptr++) {
    	day += *ptr;
    }
    return day;
}

/* month_day: set month,day from day of year */

void month_day2(int year,int yearday,int *month,int *day)
{
    int i,leap;

    leap = year % 4 == 0 && year%100 != 0 || year%400 == 0;
    if(leap)
	    yearday %= 366;
    else
	    yearday %= 365;
    if (year < 1 || yearday < 1) {
                *month=-1;
		*day=-1;
                return;
     }
    for(i=1;yearday > daytab[leap][i];i++)
        yearday -= daytab[leap][i];

    *month=i;
    *day=yearday;
    return;
}
