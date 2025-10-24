#include <stdio.h>

int main() {
    int choice;
    double radius, length, width, base, height, area;

    printf("Menu:\n");
    printf("1. Area of Circle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Triangle\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter radius: ");
            scanf("%lf", &radius);
            if (radius <= 0) {
                printf("Invalid input. Radius must be positive.\n");
                break;
            }
            area = 3.14159 * radius * radius;
            printf("Area of Circle: %.2lf\n", area);
            break;
        case 2:
            printf("Enter length and width: ");
            scanf("%lf %lf", &length, &width);
            if (length <= 0 || width <= 0) {
                p

