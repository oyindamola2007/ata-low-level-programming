#include <stdio.h>

int main(void) {
    int ch;

    printf("Enter text (press Enter to stop): ");

    while ((ch = getchar()) != '\n' && ch != EOF) {
        putchar(ch);  
    }

    putchar('\n'); 

    return 0;
}
