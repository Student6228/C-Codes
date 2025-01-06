/*Create a function to find the maximum of two numbers using if-else*/
#include<stdio.h>
void value(int a,int b ){
    if(a>b){
        printf("max value is a ");
    }
    else{
        printf("b is max");
    }
}
int main()
{
int a, b;
printf("enter the value of a,b");
scanf("%d%d",&a,&b);
  value(a,b);
return 0;
}