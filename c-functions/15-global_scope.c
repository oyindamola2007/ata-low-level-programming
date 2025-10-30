#include <stdio.h>

int global_count = 0;

void increment_global_count(void);

void increment_global_count(void)
{
    global_count++;
}

int main(void)
{
    increment_global_count();
    printf("Global count after 1st increment: %d\n", global_count);

    increment_global_count();
    printf("Global count after 2nd increment: %d\n", global_count);

    increment_global_count();
    printf("Global count after 3rd increment: %d\n", global_count);

    return 0;
}

