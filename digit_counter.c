#include <stdio.h>

int main() {
    int num;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);


    if (num < 0)
        num = -num;

    
    if (num == 0)
        count = 1;
    else {
        do {
            num /= 10;
            count++;
        } while (num != 0);
    }

    printf("Number of digits: %d\n", count);

    return 0;
}
