/*Create a function to swap two numbers using call by value and another using call by reference.*/

#include<stdio.h>
int value(int a, int b){
    int temp=a;
    a=b;
    b=temp;
    printf("inside value  a=%d b=%d\n",a,b);
}
int main()
{
int a=7,b=9;
 
//  printf("after swaping a=%d b=%d\n",value(a,b));
value(a,b);
return 0;
}