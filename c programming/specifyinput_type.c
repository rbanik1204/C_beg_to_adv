#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("enter a upper case letter or a lower case letter or a number:");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
    printf("entered lower case letter");
    else if(ch>='A'&&ch<='Z')
    printf("entered upper case letter");
    else if(ch>=0&&ch<=9)
    printf("entered a number");
    else
    printf("entered a special character");
    getch();
}