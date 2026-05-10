#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    circumference = 2 * PI * radius;
    printf("The perimeter (circumference) is: %.2f\n", circumference);
    return 0;
}
