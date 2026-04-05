#include <stdio.h>
int main() {
    float d1, d2, area;
    printf("Enter the length of the first diagonal: ");
    scanf("%f", &d1);
    printf("Enter the length of the second diagonal: ");
    scanf("%f", &d2);
    area = (d1 * d2) / 2.0;
    printf("\nThe area of the Rhombus is: %.2f\n", area);
    return 0;
}
