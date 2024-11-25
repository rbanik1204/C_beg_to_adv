#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,n,i;
    printf("enter two number:");
    scanf("%d%d",&a,&b);
    printf("enter the range:");
    scanf("%d",&n);
    printf("%d\t%d\t",a,b);
    for(i=0;i<n-2;i++)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
}