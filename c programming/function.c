#include<stdio.h>
#include<conio.h>
void sum();
void main()
{
    sum();
}
void sum()
{
    int a,b,sum;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum=%d",sum);
}