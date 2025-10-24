#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1; 
    int i = 1;

   
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

  
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1; 
    }

   
    while (i <= n) {
        factorial *= i; 
        i++;
    }

    
    printf("Factorial of %d = %llu\n", n, factorial);

    return 0;
}

