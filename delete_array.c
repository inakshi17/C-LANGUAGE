#include <stdio.h>
int delete(int a[], int n) {
    int pos,i;
    printf("Enter the position (0-based) to delete: ");
    scanf("%d", &pos);
    if (pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return n; 
    }
    for (i = pos; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    return n - 1;
}
int main() {
    int n, i, choice;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n]; 
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &a[i]);
    }
    printf("Original array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    printf("Do you want to delete an element (1 for yes, 0 for no): ");
    scanf("%d", &choice);
    if (choice == 1) {
        n=delete(a, n);
        printf("Updated array: ");
        for (i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    return 0;
}
