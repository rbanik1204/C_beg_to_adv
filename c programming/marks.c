#include<stdio.h>
#include<conio.h>
void main()
{
    int marks;
    printf("enter marks:");
    scanf("%d",&marks);
    if(marks>90)
    printf("grade is O");
    else if(marks>80)
    printf("grade is E");
    else if(marks>70)
    printf("grade is A");
    else if(marks>60)
    printf("grade is B");
    else
    printf("grade is F");
    printf("\nout of if else statement");
}