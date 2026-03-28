#include <stdio.h>
int fibonacci(int i) {
    if (i == 0) return 0;    
    if (i == 1) return 1;
    return fibonacci(i - 1) + fibonacci(i - 2);
}

int main() {
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}
