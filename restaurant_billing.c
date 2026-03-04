#include <stdio.h>
int main() {
    printf("1 - Burger -> 120\n");
    printf("2 - Pizza  -> 250\n");
    printf("3 - Pasta  -> 180\n");
    int q, i, ch;
    float sum=0, total;
    printf("Do you want to order [1-yes/0-no]: ");
    scanf("%d",&ch);
    while (ch==1) {
        printf("Enter your order number: ");
        scanf("%d",&i);
        printf("Enter quantity of your order: ");
        scanf("%d",&q);
        if (i == 1) sum+=120*q;
        else if (i == 2) sum+=250*q;
        else if (i == 3) sum+=180*q;
        else printf("Invalid order number!\n");
        printf("Do you want to order more [1-yes/0-no]: ");
        scanf("%d", &ch);
    }
    if (sum > 1000) {
        sum = sum - 0.1 * sum; 
    }
    total = sum + 0.05 * sum; 
    printf("Your total bill: %.2f\n", total);
    return 0;
}
