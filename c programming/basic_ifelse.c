#include<stdio.h>
#include<conio.h>
void main()
{
     int age;
     printf("enter age:");
     scanf("%d",&age);
     if(age>=25&&age<=30)
     {
        printf("age=%d",age);
        printf("\ncoffee with me");
     }
     else
     printf("age=%d",age);
     printf("\ngo home");
     printf("\nout of if-else block");
     getch();
}