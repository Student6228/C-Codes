
#include<stdio.h>
void  input(int a[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("enter the element is %d",i);
        scanf("%d",&a[i]);
    }
}

void print(int a[], int size){
    printf("the array is :");
    for (int i = 0; i < size; i++)
    {
        printf("%d",a[i]);
    }
    
}
int main()
{
int a[5];
input(a,5);
print(a,5);
return 0;
}