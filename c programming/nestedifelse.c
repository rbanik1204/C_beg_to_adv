#include<stdio.h>
#include<conio.h>
void main()
{
    int salary,age;
    printf("enter age and salary:");
    scanf("%d%d",&age,&salary);
    if(age>50)
    {
        if(salary<60)
        {
            salary +=10;
        printf("salary=%dK",salary);
        }
        else
        {
            salary +=5;
            printf("salary=%dK",salary);
        }
    }
    else
    {
        salary += 3;
        printf("salary=%dK",salary);
    }
}