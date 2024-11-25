#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,sum,subtract,multiply,divide;
    char operator;
    printf("enter an operator:");
    scanf("%c",&operator);
    printf("enter values of a and b:");
    scanf("%d%d",&a,&b);
    switch(operator)
    {
        case '+' :
        sum=a+b;
        printf("%d+%d=%d",a,b,sum);
        break;
        case '-' :
        subtract=a-b;
        printf("%d-%d=%d",a,b,subtract);
        break;
        case '*' :
        multiply=a*b;
        printf("%d*%d=%d",a,b,multiply);
        break;
        case '/' :
        divide=a/b;
         printf("%d/%d=%d",a,b,divide);
         break;
        default :
        printf("enter valid operator");
    }
    getch();
}