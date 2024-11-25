#include<stdio.h>
#include<conio.h>
void main()
{
    int m,n,p,q;
    label:
    printf("enter the first matrix rows and column:");
    scanf("%d%d",&m,&n);
    printf("enter the second matrix rows and column:");
    scanf("%d%d",&p,&q);
    int matrix1[m][n],matrix2[p][q],c[m][q],i,j;
    printf("enter the values of first matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("first matrix is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",matrix1[i][j]);
        }printf("\n");
    }
    printf("enter the values of second matrix:");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }
    printf("second matrix is:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",matrix2[i][j]);
        }printf("\n");
    }
    if(n==p)
    {
        printf("matrix summation is possible\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                c[i][j]=0;
                c[i][j]+=matrix1[i][j]+matrix2[i][j];
            }
        }
      printf("sum of matrices is:\n");
     for(i=0;i<m;i++)
      {
        for(j=0;j<q;j++)
        {
            printf("%d\t",c[i][j]);
        }printf("\n"); 
      }
    }
    else
    {
        printf("summation is not possible\n");
        goto label;
    }
}