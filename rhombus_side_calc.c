#include <stdio.h>
#include <math.h>
int main() {
    double d1, d2, side;
    printf("Enter the length of diagonal 1: ");
    scanf("%lf", &d1);
    printf("Enter the length of diagonal 2: ");
    scanf("%lf", &d2);
    side = sqrt(pow(d1 / 2, 2) + pow(d2 / 2, 2));
    printf("\nThe length of the side is: %.2f\n", side);
    printf("The perimeter (4 * side) is: %.2f\n", 4 * side);
    return 0;
}
