#include <stdio.h>
int main() {
    float side, perimeter;
    printf("Enter the length of one side of the rhombus: ");
    scanf("%f", &side);
    perimeter = 4 * side;
    printf("\nFor a side length of %.2f:", side);
    printf("\nThe perimeter of the Rhombus is: %.2f\n", perimeter);
    return 0;
}
