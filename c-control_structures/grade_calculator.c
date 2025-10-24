#include <stdio.h>

int main() {
    int score;
    scanf("%d", &score);

    if (score >= 0 && score <= 45) {
        printf("Grade: F\n");
    } else if (score >= 46 && score <= 60) {
        printf("Grade: D\n");
    } else if (score >= 61 && score <= 84) {
        printf("Grade: C\n");
    } else if (score >= 85 && score <= 94) {
        printf("Grade: B\n");
    } else if (score >= 95 && score <= 100) {
        printf("Grad

