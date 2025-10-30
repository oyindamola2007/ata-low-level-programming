#include <stdio.h>

int get_fixed_number();

int get_fixed_number() {
    return 100;
}

int main() {
    int number = get_fixed_number();
    printf("Fixed number is: %d\n", number);
    return 0;
}

