#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c, discriminant, root1, root2;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are: %.2lf and %.2lf\n", root1, root2);
    } 
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Root is: %.2lf\n", root1);
    } 
    else {
        printf("Roots are complex and imaginary.\n");
    }
    return 0;
}
