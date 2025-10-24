#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1;

    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    int i = 1;
    while (i <= n) {
        factorial *= i;
        i++;
    }

    printf("Factorial of %d is: %llu\n", n, factorial);
    return 0;
}

