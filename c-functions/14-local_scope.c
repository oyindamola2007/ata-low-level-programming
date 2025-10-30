#include <stdio.h>

void demonstrate_local_scope();

int main(void)
{
    int local_var = 10;
    demonstrate_local_scope();
    printf("Inside main: local_var = %d\n", local_var);
    return 0;
}

void demonstrate_local_scope()
{
    int local_var = 50;
    printf("Inside demonstrate_local_scope: local_var = %d\n", local_var);
}

