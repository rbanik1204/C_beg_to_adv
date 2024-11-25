#include<stdio.h>
#include<conio.h>
int gcd_lcm(int,int);
int main()
{
    int a,b,z,lcm;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    z=gcd_lcm(a,b);
    printf("gcd is:%d\n",z);
    lcm=a*b/z;
    printf("lcm is:%d",lcm);
}
int gcd_lcm(int a,int b)
{  while(a!=b)
   {
   if(a>b)
   return (gcd_lcm(a-b,b));
   else if(b>a)
   return (gcd_lcm(a,b-a));
   }
   return a;
}