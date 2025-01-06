/*Create a function to calculate the factorial of a number..*/

#include<stdio.h>
 int factorial(int num){
     int fact=1;
     for (int  i = 1; i <=num; i++)
     {
        fact*=i;
     }
     return fact;
     
 }
int main()
{
int n;
printf("enter the value of n:");
scanf("%d",&n);
printf("the factorial of %d is %d",n,factorial(n));
return 0;
}