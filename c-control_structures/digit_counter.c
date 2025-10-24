#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);

    if (n == 0) {
        count = 1;
    } else {
        if (n < 0) {
            n = -n;
        }
        do {
            n /= 10;
            count++;
        } while (n != 0);
    }

    printf("Number of digits: %d\n", count);
    return 0;
}

