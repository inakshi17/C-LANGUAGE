#include <stdio.h>

int checkFib(int target, int a, int b) {
    if (a == target) return 1; 
    if (a > target)  return 0; 
    return checkFib(target, b, a + b); 
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (checkFib(n, 0, 1))
        printf("%d is a Fibonacci number.\n", n);
    else
        printf("%d is NOT a Fibonacci number.\n", n);
    return 0;
}
