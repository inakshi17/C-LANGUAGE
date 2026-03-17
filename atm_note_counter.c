#include <stdio.h>
int main() {
    int amount, notes;
    printf("Enter the total amount: ");
    scanf("%d", &amount);
    printf("\nNote Breakdown:\n");
    notes = amount / 500;
    printf("500 : %d\n", notes);
    amount %= 500; 
    notes = amount / 100;
    printf("100 : %d\n", notes);
    amount %= 100;
    notes = amount / 50;
    printf("50  : %d\n", notes);
    amount %= 50;
    notes = amount / 20;
    printf("20  : %d\n", notes);
    amount %= 20;
    notes = amount / 10;
    printf("10  : %d\n", notes);
    amount %= 10;
    return 0;
}
