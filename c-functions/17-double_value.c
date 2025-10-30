#include <stdio.h>

void double_value(int *num)
{
    *num = *num * 2;
}

int main()
{
    int value;

    printf("Enter an integer: ");
    scanf("%d", &value);

    printf("Original value: %d\n", value);

    double_value(&value);

    printf("Doubled value: %d\n", value);

    return 0;
}

