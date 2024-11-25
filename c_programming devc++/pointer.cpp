#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5]={3,2,67,0,56};
    int *p=&a[3];
    printf("%d %d %d",--(*p),(*p)++,++(*p));
}
