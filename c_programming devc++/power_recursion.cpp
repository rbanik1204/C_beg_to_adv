#include<stdio.h>
#include<conio.h>
int power(int,int);
int main()
{
    int n,z,x;
    printf("enter the number:");
    scanf("%d%d",&n,&z);
    if(n>0&z>0)
    {
    x=power(n,z);
    printf("%d",x);
    }
}
int power(int n, int z)
{
    if(z>0)
    return (n*power(n,z-1));
    else
    return 1;
}
