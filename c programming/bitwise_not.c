#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a,b,c;
    printf("enter the values of a,b and c:");
    scanf("%f%f%f",&a,&b,&c);
    d=sqrt(b)-(4*a*c);
    p=-b/(2*a);
    q=d/(2*a);
    if(d>=0)
    {
        printf("roots are real\n");
        printf("root1=%f+%f\n",p,q);
        printf("root2=%f+%f",p,q);
    }
    else
    {
        printf("roots are imaginary\n");
        printf("root1=%f+i%f\n",p,q);
        printf("root2=%f+i%f",p,q);
    }
    getch();
}