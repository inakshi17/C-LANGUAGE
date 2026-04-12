#include <stdio.h>
int main() {
    float side, volume;
    float *ptr; 
    printf("Enter the side of the cube: ");
    scanf("%f", &side);
    ptr = &side;
    volume = (*ptr) * (*ptr) * (*ptr);
    printf("The volume of the cube is: %.2f\n", volume);
    return 0;
}
