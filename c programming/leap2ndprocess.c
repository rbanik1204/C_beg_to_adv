#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("enter an year:");
    scanf("%d",&year);
    if(year%400==0||year%4==0&&!(year%100==0))
    printf("year is leap year");
    else
    printf("year is not a leap year");
}