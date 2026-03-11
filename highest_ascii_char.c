#include <stdio.h>
int main() {
    int n,i;
    printf("Enter number of characters: ");
    scanf("%d", &n);
    char a[n];
    for(i=0;i<n; i++){
        printf("enter element %d :",i+1);
        scanf(" %c", &a[i]); 
    }
    printf("\noriginal array-");
    for(i=0;i<n;i++){
        printf("%c ",a[i]);
    }
    char max = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }
    printf("Character with highest ASCII value: %c\n", max);
    printf("Its ASCII value: %d\n", max);
    return 0;
}
