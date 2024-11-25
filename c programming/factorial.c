#include<stdio.h>
#include<conio.h>
int main()
{
    int number,i,r=1;
    printf("enter a number:");
    scanf("%d",&number);
    for(i=number;i>=1;i--)
    {
       r*=i;
    }
    if (number==0)
    printf("factorial is 1");
    else
    printf("factorial is:%d",r);
}