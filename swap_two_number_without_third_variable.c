#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers (a and b): ");
    scanf("%d %d", &a, &b);
    printf("\nBefore Swapping: a = %d, b = %d\n", a, b);
    a = a + b; 
    b = a - b; 
    a = a - b; 
    printf("After Swapping:  a = %d, b = %d\n", a, b);
    return 0;
}
