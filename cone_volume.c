#include <stdio.h>
#include <math.h>

double get_cone_volume(double radius, double height) {
    return (1.0 / 3.0) * M_PI * pow(radius, 2) * height;
}
int main() {
    double radius, height, volume;
    printf("Enter radius of the cone: ");
    scanf("%lf", &radius);
    printf("Enter height of the cone: ");
    scanf("%lf", &height);
    if (radius < 0 || height < 0) {
        printf("Error: Dimensions cannot be negative.\n");
    } else 
    {   volume = get_cone_volume(radius, height);
        printf("The volume of the cone is: %.2f\n", volume);
    }
    return 0;
}
