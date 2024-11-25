#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,sum,subtract,multiply,divide;
    char operator;
    printf("enter values of a and b:");
    scanf("%d%d",&a,&b);
    fflush(stdin);
    printf("enter an operator:");
    scanf("%c",&operator);
    switch(operator)
    {
        case '+' :
        sum=a+b;
        printf("sum=%d",sum);
        break;
        case '-' :
        subtract=a-b;
        printf("subtract=%d",subtract);
        break;
        case '*' :
        multiply=a*b;
        printf("multiply=%d",multiply);
        break;
        case '/' :
        divide=a/b;
         printf("divide=%d",divide);
    }
    getch();
}
