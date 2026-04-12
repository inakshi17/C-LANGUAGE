#include <stdio.h>
void calculateSphere(float radius, float *volPtr, float *surfPtr) {
    float pi = 3.14159;
    *volPtr = (4.0/3.0) * pi * (radius * radius * radius);
    *surfPtr = 4.0 * pi * (radius * radius);
}
int main() {
    float radius, volume, surfaceArea;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);
    calculateSphere(radius, &volume, &surfaceArea);
    printf("\n--- Sphere Results ---\n");
    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);
    return 0;
}
