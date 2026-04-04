#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    int Book_ID;
    char Title[100];
    char Author[50];
    float Price;
};
int main(){
    int n, i, j;
    struct Book *b, temp;
    printf("Enter the number of books: ");
    scanf("%d", &n);
    b = (struct Book*)malloc(n * sizeof(struct Book));
    for(i = 0; i < n; i++) {
        printf("\nEnter details for Book %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &b[i].Book_ID);
        getchar(); 
        printf("Title: ");
        gets(b[i].Title); 
        printf("Author: ");
        gets(b[i].Author);
        printf("Price: ");
        scanf("%f", &b[i].Price);
    }
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(b[j].Price < b[j + 1].Price){
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }
    printf("\n--- Books Sorted by Price (Descending) ---\n");
    printf("%-10s %-20s %-20s %-10s\n", "ID", "Title", "Author", "Price");
    for(i = 0; i < n; i++) {
        printf("%-10d %-20s %-20s %-10.2f\n", b[i].Book_ID, b[i].Title, b[i].Author, b[i].Price);
    }
    free(b);
    return 0;
}
