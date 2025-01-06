/*Write a function to check whether a number is prime or not.*/

#include<stdio.h>
#include<math.h>
int value(int n){
    if(n==2|| n==1){
        printf("this is prime");
    }
    for (int i = 2; i <sqrt(n); i++)
    {
        if(n%2==0){
            printf("this is not prime");
        }
        else{
            printf("yes this is prime");
        }
    }
    
}
int main()
{
int n;
printf("enter the number :");
scanf("%d",&n);
value(n);
return 0;
}