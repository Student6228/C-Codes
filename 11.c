/*Write a function to calculate the nth Fibonacci number using recursion.*/

#include<stdio.h>
int fibbnoacci(int n){
    int a=0 , b=1 , next;
    printf("the fibbnoacci series:");
    for (int i = 0; i < n; i++)
    {
        printf("%d",a);
        next=a+b;
        a=b;
        b=next;
    }
    printf("\n");
}
int main()
{
int num;
printf("enter the number :");
scanf("%d",&num);
if(num<=0){
    printf("please enter the positive value :");
}
else{
    fibbnoacci(num);
}
return 0;
}