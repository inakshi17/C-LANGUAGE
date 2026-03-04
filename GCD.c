#include <stdio.h>
int main() {
    int n1, n2, t, i;
    printf("Enter your first number: ");
    scanf("%d", &n1);
    printf("Enter your second number: ");
    scanf("%d", &n2);
    if (n1==0 && n2==0) {
        printf("GCD is undefined when both numbers are zero.\n");
    } else if (n1==0) {
        printf("Greatest common divisor of %d and %d is %d\n", n1, n2, n2);
    } else if (n2==0) {
        printf("Greatest common divisor of %d and %d is %d\n", n1, n2, n1);
    } else {
        if (n1 > n2){
            t = n1;
            n1 = n2;
            n2 = t;
        }
        for (i = n1; i > 0; i--){ 
            if (n1%i==0 && n2%i==0) {
                break;
            }
        }
        printf("Greatest common divisor of %d and %d is %d\n", n1, n2, i);
    }
    return 0;
}
