#include<stdio.h>
#include<conio.h>
#include<stddef.h>
void main()
{
    int i,arr1[5],arr2[5],sumarr[5];
    for(i=0;i<5;i++)
    {
        printf("enter first array value=\n");
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("enter second array value=\n");
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<5;i++)
    {
        sumarr[i]=arr1[i]+arr2[i];
        printf("sum of arrays=%d",sumarr[i]);
    }
}