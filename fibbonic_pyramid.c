#include <stdio.h>
int main(){
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    int a = 1, b = 1, c;
    for (int i = 0; i < a; i++) {
        printf("*");
    }
    printf("\n");
    for (int i = 0; i < b; i++) {
        printf("*");
    }
    printf("\n");
    for (int line = 3; line <= n; line++) {
        c = a + b;
        for (int i = 0; i < c; i++) {
            printf("* ");
        }
        printf("\n");
        a = b;
        b = c;
    }
    return 0;
}
