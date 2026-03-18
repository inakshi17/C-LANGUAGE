#include <stdio.h>
int findCube(int num) {
    return num * num * num;
}
int main() {
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = findCube(n);
    printf("Cube of %d is %d\n", n, result);
    return 0;
}
