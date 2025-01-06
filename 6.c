/*Write a program with a function to check if a given number is even or odd.*/

#include<stdio.h>
void value(int a){
    if(a%2==0){
        printf("this is even");
    }
    else{
        printf("this is odd");
    }
}
int main()
{
int x;
printf("enter the value of x :");
scanf("%d",&x);
   value(x);
return 0;
}