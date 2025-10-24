#include <stdio.h>
#include <string.h>

int main() {
    char name[50];  

    printf("Enter your name: ");
    if (fgets(name, sizeof(name), stdin) != NULL) {

        size_t len = strlen(name);
        if (len > 0 && name[len - 1] == '\n') {
            name[len - 1] = '\0';
        }


        printf("Hello, %s\n", name);
    }

    return 0;
}
