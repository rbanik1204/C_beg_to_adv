#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is maximum",a);
        }
        else
        {
            printf("%d is maximum",c);
        }
    }
    else
    printf("%d is maximum",b);
}