#include <stdio.h>
int main() {
    float length, width, area, perimeter;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    area = length * width;
    perimeter = 2 * (length + width);
    printf("\n--- Rectangle Dimensions ---\n");
    printf("Length:    %.2f\n", length);
    printf("Width:     %.2f\n", width);
    printf("Total Area: %.2f\n", area);
    printf("Perimeter:  %.2f\n", perimeter);
    return 0;
}
