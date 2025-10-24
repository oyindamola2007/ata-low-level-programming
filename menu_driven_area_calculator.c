#include <stdio.h>

int main() {
    int choice;
    double radius, length, width, base, height, area;

    printf("=== Area Calculation Menu ===\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("4. Exit\n");

    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            
            printf("Enter radius of the circle: ");
            scanf("%lf", &radius);

            if (radius <= 0) {
                printf("Invalid input! Radius must be positive.\n");
                break;
            }

            area = 3.14159 * radius * radius;
            printf("Area of the circle: %.2lf\n", area);
            break;

        case 2:
            
            printf("Enter length of the rectangle: ");
            scanf("%lf", &length);
            printf("Enter width of the rectangle: ");
            scanf("%lf", &width);

            if (length <= 0 || width <= 0) {
                printf("Invalid input! Length and width must be positive.\n");
                break;
            }

            area = length * width;
            printf("Area of the rectangle: %.2lf\n", area);
            break;

        case 3:
           
            printf("Enter base of the triangle: ");
            scanf("%lf", &base);
            printf("Enter height of the triangle: ");
            scanf("%lf", &height);

            if (base <= 0 || height <= 0) {
                printf("Invalid input! Base and height must be positive.\n");
                break;
            }

            area = 0.5 * base * height;
            printf("Area of the triangle: %.2lf\n", area);
            break;

        case 4:
            printf("Exiting program. Goodbye!\n");
            break;

        default:
            printf("Invalid choice! Please select a number between 1 and 4.\n");
    }

    return 0;
}
