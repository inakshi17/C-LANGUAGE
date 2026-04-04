#include <stdio.h>
#define PRICE_PER_LITER 0.05 
#define GREEN_LIMIT 500       
int main() {
    int liters;
    float base_bill, discount = 0, final_bill;
    printf("Enter water consumed (in Liters): ");
    scanf("%d", &liters);
    base_bill = liters * PRICE_PER_LITER;
    if (liters <= GREEN_LIMIT) {
        discount = base_bill * 0.15; 
        printf("Great job! You qualify for a conservation discount.\n");
    }
    final_bill = base_bill - discount;
    printf("\n--- Monthly Water Bill ---\n");
    printf("Usage:       %d Liters\n", liters);
    printf("Base Cost:   %.2f\n", base_bill);
    printf("Discount:   -%.2f\n", discount);
    printf("Total Due:   %.2f\n", final_bill);
    return 0;
}
