#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1; // To handle large factorials

    // Input
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }

        // Output
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}
