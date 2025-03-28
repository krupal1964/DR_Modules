/* Authore: Krupal Vachhani(166883)
 * Date: 18 March,2025
 */

#include<stdio.h>
#include "../include/header5.h"

static char daytab[2][13]={
    {0,31,28,31,30,31,30,31,31,30,31,30,31},
    {0,31,29,31,30,31,30,31,31,30,31,30,31}
};


void fun_5_8()
{
    int day,mo,ye,dat,c;
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
			day=day_of_year(ye,mo,dat);
			if(day!=-1)
				printf("day is of the year is %d\n",day);
			else
				printf("Invalid input\n");
			break;
		case 2:
			printf("Enter year:");
			scanf("%d",&ye);
			printf("Enter no of days:");
			scanf("%d",&day);
			month_day(ye,day);
			break;
		default:
			printf("Invalid choice\n");
			return;
	}
    }
}

/* day_of_year: set day of year from month & day */

int day_of_year(int year,int month,int day)
{
    int i,leap;

    leap = (year % 4 == 0 && year%100 != 0 || year%400) == 0;
    if (year < 1 || month < 1 || month > 12 || day < 1 || day > daytab[leap][month]) {
	    return -1;
     }
    for(i=1;i<month;i++)
        day += daytab[leap][i];

    return day;
}

/* month_day: set month,day from day of year */

void month_day(int year,int yearday)
{
    int i,leap;

    leap = year % 4 == 0 && year%100 != 0 || year%400 == 0;
    if (year < 1 || yearday < 1 || yearday > (leap ? 366 : 365)) {
                printf("Invalid Input\n");
                return;
     }
    for(i=1;yearday > daytab[leap][i];i++)
        yearday -= daytab[leap][i];

    printf("Month: %d, Day: %d\n", i, yearday);
}
