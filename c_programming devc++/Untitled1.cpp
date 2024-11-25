#include<stdio.h>
int main()
{
int number;
printf("enter the year:");
scanf("%d",&number);
if((number%400==0)||(number%4)==0&&(number%100)!=0)
printf("year is leap year");
else
printf("not leap year");
}
