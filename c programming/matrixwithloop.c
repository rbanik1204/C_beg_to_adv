#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,m;
    printf("enter number of rows:");
    scanf("%d",&m);
    for(i=0;i<=m-1;i++)
    {
    for(j=1;j<=2*i+1;j++)
    {
        printf("*");
    }
    printf("\n");
    }
}