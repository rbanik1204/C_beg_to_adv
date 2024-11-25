#include<stdio.h>
#include<conio.h>
void main()
{
  int marks;
  printf("enter marks:");
  scanf("%d",&marks);
  switch(marks/10)
  {
    case 10:
    case 9:
    case 8:
    printf("grade is A");
    break;
    case 7:
    printf("grade is B");
    break;
    case 6:
    printf("grade is C");
    break;
    default:
    printf("grade is D");
  }
}