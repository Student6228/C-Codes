/*Write a function to reverse a given number.
Example: Input = 1234, Output = 4321.*/


#include<stdio.h>
int value(int num){
    int reverse=0;
while (num > 0)
{
   int last_digit=num%10;
   reverse=reverse*10+last_digit;
   num/=10;
}
return reverse;
}
int main()
{
int number;
printf("enter the number :");
scanf("%d",&number);
printf("the reverse is %d" ,value(number));
return 0;
}