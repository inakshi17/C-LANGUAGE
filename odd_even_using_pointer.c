#include <stdio.h>

void checkOddEven(int *num) {
    if (*num % 2 == 0) {
        printf("%d is even.\n", *num);
    } else {
        printf("%d is odd.\n", *num);
    }
}

int main() {
    int val;
    printf("Enter an integer: ");
    scanf("%d", &val);
    checkOddEven(&val);
    return 0;
}
