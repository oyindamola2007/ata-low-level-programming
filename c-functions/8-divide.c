#include <stdio.h>

int divide(int a, int b);

int main(void)
{
    int num1, num2, result;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    result = divide(num1, num2);

    printf("Result of division: %d\n", result);

    return 0;
}

int divide(int a, int b)
{
    if (b == 0)
        return 0;
    else
        return a / b;
}

