#include<stdio.h>
#include<conio.h>
int factorial(int);
int main()
{
    int n,z;
    printf("enter the number of which factorial you want:");
    scanf("%d",&n);
    if(n>=0)
    {
    z=factorial(n);
    printf("%d",z);
    }
}
int factorial(int n)
{
    if(n>0)
    return (n*factorial(n-1));
    else if(n==0)
    return 1;
}