#include <stdio.h>

int power(int n, int p) {
    if (p == 0) return 1;          
    return (long long)n * power(n, p - 1); 
}

int main() {
    int b, e;
    printf("Enter base and exponent: ");
    scanf("%d %d", &b, &e)
    if (e < 0) {
        printf("Exponent should be non-negative.\n");
    }
    else {
        printf("Result: %lld\n", power(b, e));
    }
    return 0;
}
