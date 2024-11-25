#include<stdio.h>
#include<conio.h>
void main()
{
  int age,salary;
  printf("enter age and salary:");
  scanf("%d%d",&age,&salary);
  if(age>50&&salary<60)
  {
    salary +=10;
    printf("salary=%d",salary);
  }
  else if(age>50&&salary>60)
  {
    salary+=5;
    printf("salary=%d",salary);
  }
  else
  {
    salary +=3;
    printf("salary=%d",salary);
  }
  getch();
}