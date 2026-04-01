#include <stdio.h>

int main() {
    int n, c = 0;
    int *N = &n;
    printf("Enter your number: ");
    if (scanf("%d", N) != 1) return 1; 
    if (*N == 0) {
        c = 1;
    }
    else{
        while (*N > 0) {
            *N = *N / 10;
            c++;
        }
    }
    if (c == 1) {
        printf("Single digit number\n");
    } 
    else {
        printf("Multi digit number\n");
    }
    return 0;
}
