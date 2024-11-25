#include<stdio.h>
#include<conio.h>
#include<stddef.h>
//sum and average of five stuents marks
void main()
{
    int marks[5],i;
    int sum=0,avg=0;
    printf("enter five marks:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+marks[i];
    }
    avg=sum/5;
    printf("sum=%d",sum);
    printf("avg=%d",avg);
}