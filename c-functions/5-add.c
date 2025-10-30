#include <stdio.h>

int add(int a, int b);

int add(int a, int b) {
    return a + b;
}

int main() {
    int x, y, result;
    printf("Enter the first integer: ");
    scanf("%d", &x);
    printf("Enter the second integer: ");
    scanf("%d", &y);
    result = add(x, y);
    printf("Result of addition: %d\n", result);
    return 0;
}

