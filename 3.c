#include <stdio.h>

void avarage(int a, int b, int c, int d) {
    int average = (a + b + c + d) / 4; // Correct division by 4
    printf("The average is: %d\n", average);
}

int main() {
    int a = 5, b = 3, c = 7, d = 8;
    avarage(a, b, c, d); // Pass the four integers to the function
    return 0;
}
