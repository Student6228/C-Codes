#include <stdio.h>
/*write a program that checks the element have positive number,who sum should be even,the number should also be divisible by 5*/
// Function to check if the sum of digits is even
int sum_of_digits_is_even(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10; 
        num /= 10;         
    }
    return sum % 2 == 0; 
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Numbers that are positive, divisible by 5, and have an even sum of digits:\n");
    for (int i = 0; i < n; i++) {
        int num = arr[i];

        // Check the conditions:
        if (num > 0 && num % 5 == 0 && sum_of_digits_is_even(num)) {
            printf("%d ", num);
        }
    }
    
    return 0;
}
