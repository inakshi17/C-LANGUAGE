#include <stdio.h>

int main() {
    float a, b, h, area;
    float *p_a = &a;
    float *p_b = &b;
    float *p_h = &h;
    float *p_area = &area;

    printf("Enter the length of parallel side a: ");
    scanf("%f", p_a);

    printf("Enter the length of parallel side b: ");
    scanf("%f", p_b);

    printf("Enter the height (h): ");
    scanf("%f", p_h);

    *p_area = 0.5 * (*p_a + *p_b) * (*p_h);
    printf("\n--- Results ---\n");
    printf("Parallel side A: %.2f\n", *p_a);
    printf("Parallel side B: %.2f\n", *p_b);
    printf("Height:%.2f\n", *p_h);
    printf("Area of Trapezium: %.2f\n", *p_area);
    return 0;
}
