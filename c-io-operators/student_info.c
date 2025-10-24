#include <stdio.h>

int main() {
    char name[50];
    int age;
    float grade;

    printf("Enter your name: ");
    scanf("%49s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your grade: ");
    scanf("%f", &grade);

    printf("Hello %s! Your grade is %.2f and you are %d years old.\n", name, grade, age);

    return 0;
}
