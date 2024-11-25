#include<stdio.h>
#include<conio.h>
void main()
{
    int a,sum=0;
    do
    {
    printf("enter a number:");
    scanf("%d",&a);
    if (a<0)
    break;
    sum +=a;
    } while (1);
    printf("sum=%d",sum);
    getch();
}