#include <stdio.h>
#include <math.h>

int main() {
    double side, d1, d2;
    printf("Enter the side length: ");
    scanf("%lf", &side);
    printf("Enter the length of the known diagonal (d1): ");
    scanf("%lf", &d1);
    if (side <= d1 / 2.0) {
        printf("Error: Side length must be greater than half of the diagonal.\n");
    } 
    else{
        d2 = 2.0 * sqrt(pow(side, 2) - pow(d1 / 2.0, 2));
        printf("\nThe length of the second diagonal (d2) is: %.2f\n", d2);
    }
    return 0;
}
