#include <stdio.h>

int find_min(int a, int b);

int main(void)
{
    int num1, num2, min;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    min = find_min(num1, num2);

    printf("Minimum number is: %d\n", min);

    return 0;
}

int find_min(int a, int b)
{
    if (a <= b)
        return a;
    else
        return b;
}

