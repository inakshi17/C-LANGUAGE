#include <stdio.h>

int main() {
    float d1, d2, area;
    printf("Enter length of Diagonal 1: ");
    scanf("%f", &d1);

    printf("Enter length of Diagonal 2: ");
    scanf("%f", &d2);
    area = 0.5 * d1 * d2;
    printf("Area of Rhombus = %.2f\n", area);

    return 0;
}
