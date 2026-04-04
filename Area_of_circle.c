#include <stdio.h>
int main() {
    float radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    printf("Radius: %.2f\n", radius);
    printf("The Area of the circle is: %.4f\n", area);
    return 0;
}
