#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
     int i,a,b;
     scanf("%d",&a);
     scanf("%d",&b);
     for(i=a;i<=a;i++)
     {
        if(i>=1 && i<=9)
        {
         if(i==1)
         puts("one");
         else if(i==2)
         puts("two");
         else if(i==3)
         puts("three");
         else if(i==4)
         puts("four");
         else if(i==5)
         puts("five");
         else if(i==6)
         puts("six");
         else if(i==7)
         puts("seven");
         else if(i==8)
         puts("eight");
         else if (i==9)
         puts("nine");
        }
         else
         printf("nine\n");
     }
     for(i=b;i<=b;i++)
     {
        if(i!=0)
        {
        if(a<=1)
        {
        if(b==1)
        {puts("one");
        continue;}
        }
        if(a<2)
        {if(b==2)
        {puts("two");
        continue;}puts("two");
        }
        if(a<3)
        {if(b==3)
        {puts("three");
        continue;}puts("three");}
        if(a<4)
        {if(b==4)
        {puts("four");
        continue;}puts("four");
        }
        if(a<5)
        {if(b==5)
        {puts("five");
        continue;}puts("five");
        }
        if(a<6)
        {if(b==6)
        {puts("six");
        continue;}puts("six");
        }
        if(a<7)
        {if(b==7)
        {puts("seven");
        continue;}puts("seven");
        }
        if(a<8)
        {if(b==8)
        {puts("eight");
        continue;}puts("eight");
        }
        if(a<9)
        {if(b==9)
        {puts("nine");
        continue;}puts("nine");
        }
        }
     }
    for(i=a+1;i<=b;i++)
    {  if(i>9)
       {if(i%2==0)
       puts("even");
       else
       puts("odd");
       } 
    }
}