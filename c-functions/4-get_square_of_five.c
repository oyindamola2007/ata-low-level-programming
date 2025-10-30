#include <stdio.h>
#include <math.h>

int get_square_of_five();

int get_square_of_five() {
    return (int)pow(5, 2);
}

int main() {
    int result = get_square_of_five();
    printf("Square of 5 is: %d\n", result);
    return 0;
}

