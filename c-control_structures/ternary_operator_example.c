#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    num > 0 ? printf("%d is positive.\n", num) : printf("%d is non-positive.\n", num);

    return 0;
}

