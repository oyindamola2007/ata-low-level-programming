#include <stdio.h>

long long calculate_factorial(int n)
{
    long long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    printf("Factorial of %d is: %lld\n", n, calculate_factorial(n));

    return 0;
}

