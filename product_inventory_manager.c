#include <stdio.h>
#include <stdlib.h>

struct Product {
    char name[50];
    int id;
    int quantity;
    float price;
};
int main() {
    int n;
    struct Product p;
    FILE *fPtr, *fExp;
    printf("Enter the number of products: ");
    scanf("%d", &n);
    fPtr = fopen("product.txt", "w");
    if (fPtr == NULL) {
        printf("Error opening file!");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Product %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", p.name);
        printf("ID: ");
        scanf("%d", &p.id);
        printf("Quantity: ");
        scanf("%d", &p.quantity);
        printf("Price: ");
        scanf("%f", &p.price);
        fprintf(fPtr, "%s %d %d %.2f\n", p.name, p.id, p.quantity, p.price);
    }
    fclose(fPtr);
    fPtr = fopen("product.txt", "r");
    fExp = fopen("expensive.txt", "w");

    printf("\n--- Products with Total Cost > 10,000 ---\n");
    while (fscanf(fPtr, "%s %d %d %f", p.name, &p.id, &p.quantity, &p.price) != EOF) {
        float totalCost = p.quantity * p.price;

        if (totalCost > 10000) {
            printf("ID: %d | Name: %s | Total Cost: %.2f\n", p.id, p.name, totalCost);
            fprintf(fExp, "ID: %d | Name: %s | Total Cost: %.2f\n", p.id, p.name, totalCost);
        }
    }
    fclose(fPtr);
    fclose(fExp);
    printf("\nExpensive records saved to 'expensive.txt'.\n");
    return 0;
}
