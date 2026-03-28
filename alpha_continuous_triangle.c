#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    char ch='A';
    printf("\n--- Your Pattern ---\n");
    for (i = 1; i <= n; i++){
        for (j = 1; j <= i; j++){
            printf("%c ", ch);
            ch++;
            if (ch > 'Z'){
                ch = 'A';
            }
        }
        printf("\n");
    }
    return 0;
}
