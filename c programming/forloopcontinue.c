#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a,sum=0;
    for(i=1;i<=5;i++)
    {
        printf("enter a number:");
        scanf("%d",&a);
        if(a<0)
        continue;
        sum+=a;
    }
    printf("sum=%d\n",sum);
}