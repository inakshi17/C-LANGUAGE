#include <stdio.h>
int main() {
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);
    if (num > 0) {
        printf("%.2f is a positive number.", num);
    } else if (num < 0) {
        printf("%.2f is a negative number.", num);
    } else {
        printf("The number is zero.");
    }
    return 0;
}
