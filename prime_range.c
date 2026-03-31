#include <stdio.h>

int main() {
    int low, high, i, j, flag;
    printf("Enter two intervals (low and high): ");
    scanf("%d %d", &low, &high);
    printf("Prime numbers between %d and %d are: ", low, high);
    for (i = low; i <= high; i++) {
        if (i < 2)
            continue;
        flag = 1; 
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 0; // It's divisible, so not prime
                break;
            }
        }
        if (flag == 1)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
