#include <stdio.h>
int seriesSum(int x, int n) {
    if (n == 0) {
        return 1; 
    } else {
        return pow(x, n) + seriesSum(x, n - 2);
    }
}
int main() {
    int x, n;
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter even value of n: ");
    scanf("%d", &n);
    if (n % 2 != 0) {                              
        int result =seriesSum(x,n-1);
        printf("Sum of series = %d\n", result);
    } else {
        int result = seriesSum(x, n);
        printf("Sum of series = %d\n", result);
    }
    return 0;
}
