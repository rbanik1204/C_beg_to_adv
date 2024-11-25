#include<stdio.h>
#include<conio.h>
#include<stddef.h>
//take 10 numbers then find no. of even and odd numbers
void main()
{
    int a[10],i;
    int even=0,odd=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    if(a[i]%2==0)
    even=even+1;
    else
    odd=odd+1;
    }
    printf("even=%d",even);
    printf("odd=%d",odd);
}