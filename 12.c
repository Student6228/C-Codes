/*Implement a program to calculate the sum of digits of a number using a function.*/

#include<stdio.h>
int calculate(int num){
    int sum=0;
    while (num>0)
    {
        sum+=num%10;
        num/=10;
    }
    return sum;
}
int main()
{
 int n;
 printf("enter the number :");
 scanf("%d",&n);
 printf("the sum of all digit is %d",calculate(n));
return 0;
}