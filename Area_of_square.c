#include <stdio.h>
int main() {
    float side, area;
    printf("Enter the length of the side of the square: ");
    scanf("%f", &side);
    area = side * side;
    printf("\n--- Square Dimensions ---\n");
    printf("Side Length: %.2f\n", side);
    printf("Total Area:  %.2f\n", area);
    return 0;
}
