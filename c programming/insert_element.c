#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int addition(int*,int);
int i;
int main()
{
    int n;
    printf("enter number of elements in the following array:");
    scanf("%d",&n);
    int* a=(int*)malloc((n+1)*sizeof(int));
    puts("please enter the elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    addition(a,n);
}
int addition(int *a,int n)
{
    int element,position,c;
    printf("enter the element you want to add:");
    scanf("%d",&element);
    printf("enter the position at which you want to place the element:");
    scanf("%d",&position);  
    for(i=n-2;i>=position-1;i--)
        a[i+1]=a[i];
    a[position-1]=element;
    for(i=0;i<n+1;i++)
        printf("%d\t",a[i]);
}
