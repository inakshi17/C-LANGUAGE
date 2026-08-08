#include <stdio.h>

int main() {
    float d1, d2, side, area, perimeter;

    printf("Enter diagonal 1: ");
    scanf("%f", &d1);
    printf("Enter diagonal 2: ");
    scanf("%f", &d2);
    printf("Enter side length: ");
    scanf("%f", &side);

    area = (d1 * d2) / 2.0;
    perimeter = 4 * side;

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}
