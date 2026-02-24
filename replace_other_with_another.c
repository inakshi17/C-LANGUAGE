#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    char a[n];
    int i;
    for (i = 0; i < n; i++) {
        printf("Enter element %d:",i + 1);
        getchar();
        scanf("%c", &a[i]);
    }
    printf("\nOriginal array: ");
    for (i = 0; i < n; i++) {
        printf("%c ", a[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++) {
        if (a[i] >= 'A' && a[i] <= 'Z') {
            a[i] = '@';
        } else if (a[i] >= '0' && a[i] <= '9') {
            a[i] = '#';
        } else if (a[i] == ' ') {
            a[i] = '&';
        }
    }
    printf("New array: ");
    for (i = 0; i < n; i++) {
        printf("%c ", a[i]);
    }
    printf("\n");

    return 0;
}
