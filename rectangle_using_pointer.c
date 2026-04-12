#include <stdio.h>
int main() {
    float length, width, area, perimeter;
    float *ptrL, *ptrW; 
    printf("Enter length and width of the rectangle: ");
    scanf("%f %f", &length, &width);
    ptrL = &length;
    ptrW = &width;
    area = (*ptrL) * (*ptrW);
    perimeter = 2 * ((*ptrL) + (*ptrW));
    printf("\n--- Results ---\n");
    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);
    return 0;
}
