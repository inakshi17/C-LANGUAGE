#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    printf("\n--- Binary Pattern ---\n\n");
    for (i = 1; i <= n; i++){
        for (j = 1; j <= i; j++){
            if ((i + j) % 2 == 0) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}
