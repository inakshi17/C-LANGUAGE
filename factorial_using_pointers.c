#include <stdio.h>
int main() {
    int n, i, f = 1; 
    int *N = &n;
    int *F = &f;
    printf("Enter a number: ");
    scanf("%d", N);
    if (*N < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= *N; i++) {
            *F = *F * i;
        }
        printf("Factorial of %d is: %d\n", *N, *F);
    }
    return 0;
}
