#include<stdio.h>
#include<conio.h>
void main()
{
    int number,i,r,t,palindrome=0;
    printf("enter a valid number:");
    scanf("%d",&number);
    t=number;
    do
    {
     r=number%10;
     palindrome=palindrome*10+r;
     number=number/10;
    }while(number!=0);
    if(t==palindrome)
    printf("number %d is palindrome",palindrome);
    else
    printf("%d is not a palindrome number",t);
    getch();
}