#include <stdio.h>

int subtract(int a, int b);

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int x, y, result;
    printf("Enter the first integer: ");
    scanf("%d", &x);
    printf("Enter the second integer: ");
    scanf("%d", &y);
    result = subtract(x, y);
    printf("Result of subtraction: %d\n", result);
    return 0;
}

