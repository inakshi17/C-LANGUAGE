#include <stdio.h>
int reverse(int n) {
    int d, rev = 0;
    while(n > 0) {
        d = n % 10;
        rev = rev * 10 + d;
        n = n / 10;
    }
    return rev;
}
int main() {
    int n, rev, add, c = 0, radd;
    printf("Enter the number: ");
    scanf("%d", &n);
    while(1) {
        rev = reverse(n);
        add = n + rev;
        c++;
        radd = reverse(add);
        if(radd == add) { 
            printf("Palindrome: %d\n", add);
            printf("Number of additions to get palindrome: %d\n", c);
            break;
        }
        else {
            n = add;
        }
    }
    return 0;
}
