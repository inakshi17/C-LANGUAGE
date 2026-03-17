#include <stdio.h>
int main() {
    int unit, rate, bill, tbill;
    printf("Enter your electricity unit and rate per unit: ");
    scanf("%d %d", &unit, &rate);
    bill = unit * rate;
    tbill = bill;
    if (unit > 100 && unit <= 500) {
        tbill = bill - 100;
        printf("Your total bill: %d\n", bill);
        printf("Your total bill after discount: %d\n", tbill);
    } 
    else if (unit > 500) {
        tbill = bill - 500;
        printf("Your total bill: %d\n", bill);
        printf("Your total bill after discount: %d\n", tbill);
    } 
    else {
        printf("Your total bill: %d\n", bill);
        printf("No discount applied for units under 100.\n");
    }
    return 0;
}
