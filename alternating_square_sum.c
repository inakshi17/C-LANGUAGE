#include <stdio.h>
int alternating_square_sum(int n) {
    if (n == 0) {
        return 0;
    }
    int s;
    if (n % 2 != 0) {
        s = n * n;
    } else {
        s = -(n * n);
    }
    return s + alternating_square_sum(n - 1);
}
int main() {
    int n;
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    int result = alternating_square_sum(n);
    printf("The sum of the series up to %d terms is: %d\n", n, result);
    return 0;
}
