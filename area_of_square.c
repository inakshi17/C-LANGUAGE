#include <stdio.h>
#include <math.h>

int main() {
    float side, area, perimeter, diagonal;

    printf("Enter side length of the square: ");
    scanf("%f", &side);

    area = side * side;
    perimeter = 4 * side;
    diagonal = side * sqrt(2);

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);
    printf("Diagonal = %.2f\n", diagonal);

    return 0;
}
