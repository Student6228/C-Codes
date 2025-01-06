/*Write a function that takes three numbers as input and returns the average*/

#include<stdio.h>
int avrage(int a, int b, int c){
    int avrage = (a+b+c)/3;
    
}
int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
printf("the avrage is %d",avrage(a,b,c));
return 0;
}