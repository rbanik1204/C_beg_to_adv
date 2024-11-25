#include<stdio.h>
#include<conio.h>
void main()
{
    int array[3][3],sum,i,j;
    puts("\033[32mEnter elements:\033[0m");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          scanf("%d",&array[i][j]);
        }
    }
    puts("\033[31mThe matrix is:\033[0m");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          printf("\033[34m%d\t\033[0m",array[i][j]);
        }printf("\n");
    }sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          sum+=array[i][j];
        }
    }
    printf("\033[35mThe sum of the array elements is %d \033[0m",sum);
}