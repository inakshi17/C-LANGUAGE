#include <stdio.h>

int main() {
    int n, i;
    int fib[100];
    int *ptr = fib; 
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    *(ptr + 0) = 0; 
    *(ptr + 1) = 1;
    for (i = 2; i < n; i++) {
        *(ptr + i) = *(ptr + i - 1) + *(ptr + i - 2);
    }
    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}
