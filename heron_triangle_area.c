#include <stdio.h>
#include <math.h>


double calculateArea(double a, double b, double c) {
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
int main() {
    double a, b, c;
    printf("Enter three sides of the triangle: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input.\n");
        return 1;
    }
    if (a + b > c && a + c > b && b + c > a) {
        double area = calculateArea(a, b, c);
        printf("Area of the triangle = %.2lf\n", area);
    } else {
        printf("Invalid triangle sides.\n");
    }
    return 0;
}
