#include <stdio.h>

int main() {
    int n, i, sum = 0;


    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // exit the program if invalid input
    }


    for (i = 1; i <= n; i++) {
        sum += i;  // same as sum = sum + i
    }

   
    printf("The sum of natural numbers up to %d is: %d\n", n, sum);

    return 0;
}
