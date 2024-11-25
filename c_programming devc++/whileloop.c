#include<stdio.h>
#include<conio.h>
#define n 5
void main()
{
    int a[n],i,sum=0;
    for(i=1;i<=5;i++)
    {
    printf("enter a number:");
    fflush(stdin);
    scanf("%d",&a[i]);
    printf("a=%d\n",a[i]);
    sum+=a[i];
    }
    printf("sum=%d",sum);
    getch();
    }
