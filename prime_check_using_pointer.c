#include <stdio.h>

int checkPrime(int num, int *smallestFactor) {
    if (num <= 1) return 0; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0){
            *smallestFactor = i; 
            return 0; 
        }
    }
    return 1; 
}
int main() {
    int n, factor = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (checkPrime(n, &factor)) {
        printf("%d is a Prime Number.\n", n);
    } 
    else {
        printf("%d is NOT a Prime Number.\n", n);
        if (n > 1) {
            printf("It is divisible by: %d\n", factor);
        }
    }
    return 0;
}
