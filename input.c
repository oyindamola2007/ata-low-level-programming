#include <stdio.h>

int main() {
    char name[100];  

    printf("Enter your name: ");
    scanf("%99s", name);  
    printf("Hello, \n", name);

    return 0;
}
