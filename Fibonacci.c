#include <stdio.h>
int main() {
    int n, a = 0, b = 1, next = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (next < n) {
        next = a + b;
        a = b;
        b = next;
    }
    if (next == n || n == 0) 
        printf("%d is a Fibonacci number.\n", n);
    else 
        printf("%d is NOT a Fibonacci number.\n", n);
    return 0;
}
