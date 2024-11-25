#include<stdio.h>
#include<conio.h>
int main()
{
    int a[]={10,11,-1,56,67,5,4};
    int *p,*q;
    p=a;
    q=a+3;
    printf("%d %d %d\n",(*p)++,(*p)++,*(++p));
    printf("%d\n",*p);
    printf("%d\n",(*p)++);
    printf("%d\n",(*p)++);
    q--;
    printf("%d\n",(*(q+2))--);
    printf("%d\n",*(p+2)-2);
    printf("%d\n",*(p++-2)-1);
}