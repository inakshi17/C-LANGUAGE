#include <stdio.h>
int main() {
    int n,i,j,k;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        printf("Enter elements %d :", i+1);
        scanf("%d", &a[i]);
    }
    printf("\n");
    printf("original array-\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for (i=0;i<n;i++) {
        for (j = i + 1; j < n; ) {
            if (a[i] == a[j]) {
                for (k = j; k < n - 1; k++) {
                    a[k] = a[k + 1];
                }
                n--;
            } 
            else {
                j++;
            }
        }
    }
    printf("Array after removing duplicates-\n");
    for (i=0;i<n;i++) {
        printf("%d ",a[i]);
    }
    return 0;
}
