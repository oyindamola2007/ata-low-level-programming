#include <stdio.h>
#include <unistd.h>   

int main(void) {
    FILE *fp;
    char word[50];
    int ch;

    
    fp = fopen("data.txt", "w");
    if (fp == NULL) {
        write(STDOUT_FILENO, "Error opening file\n", 19);
        return 1;
    }


    fprintf(fp, "C programming is fun");


    fputc('!', fp);


    fclose(fp);


    fp = fopen("data.txt", "r");
    if (fp == NULL) {
        write(STDOUT_FILENO, "Error opening file\n", 19);
        return 1;
    }


    fscanf(fp, "%s", word);


    write(STDOUT_FILENO, "First word: ", 12);
    for (int i = 0; word[i] != '\0'; i++) {
        putchar(word[i]);
    }
    putchar('\n');


    write(STDOUT_FILENO, "Rest of file: ", 14);
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    putchar('\n');


    fclose(fp);

    return 0;
}

