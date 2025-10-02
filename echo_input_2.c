#include <stdio.h>

int main() {
    char text[100];  

    printf("Enter a line of text: ");
    if (fgets(text, sizeof(text), stdin) != NULL) { 
        fputs(text, stdout);  
    }

    return 0;
}
