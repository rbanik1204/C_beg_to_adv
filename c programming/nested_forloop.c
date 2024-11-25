#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n;
    printf("enter value of n:");
    scanf("%d",&n);
    for(j=1;j>=n;j++)
    {
    for(i=0;i>=n;i++)
    {
        printf("*");
    }
    printf("\n");
    }
}