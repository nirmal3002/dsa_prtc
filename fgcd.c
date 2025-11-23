#include<stdio.h>
int GCD(int,int);
int main( )
{
   int divisor,devidant,gcd;
   printf("enter the value of divisor and devidant");
   scanf("%d%d",&divisor,&devidant);
    gcd=GCD(divisor,devidant);
    printf("the gcd of the %d & %d is:%d",divisor,devidant,gcd);
    return 0;
}
int GCD(int num1 ,int num2)
{
    int rem=num1%num2;
    if(rem==0)
    return num2;
    else
     return GCD(num2, rem);
}
