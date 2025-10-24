#include <stdio.h>

int main() {
    int num;

      printf("Enter an integer: ");
    scanf("%d", &num);

    (num > 0) ? printf("%d is a positive number.\n", num)
              : printf("%d is a non-positive number.\n", num);

    return 0;
}
