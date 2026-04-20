#include <stdio.h>
#define PI 3.14159265358979323846
double calculateCircumference(double radius);
int main() {
    double radius, circumference;
    printf("Enter the radius of the circle: ");
    if (scanf("%lf", &radius) != 1) {
        printf("Invalid input. Please enter a numeric value.\n");
        return 1;
    }
    if (radius < 0) {
        printf("Radius cannot be negative.\n");
    } else {
        circumference = calculateCircumference(radius);
        printf("The circumference of the circle is: %.2lf\n", circumference);
    }
    return 0;
}
double calculateCircumference(double radius) {
    return 2 * PI * radius;
}
