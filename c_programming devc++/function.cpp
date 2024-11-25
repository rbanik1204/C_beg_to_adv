#include<stdio.h>
#include<conio.h>
void sum();
int main()
{
	int a,b,sum;
    sum(a,b);
}
void sum()
{
    
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum=%d",sum);
}
