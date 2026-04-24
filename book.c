#include <stdio.h>
#include <stdlib.h>

struct book{
    int id ;
    char title[50];
    char author[50];
    float price;
};
int main(){
    int n, i, j;
    printf("Enter the number of books: ");
    scanf("%d", &n);
    struct book b[n];
    for(i = 0; i < n; i++) {
        printf("\nEnter details for Book %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &b[i].id);
        getchar(); 
        printf("Title: ");
        gets(b[i].title); 
        printf("Author: ");
        gets(b[i].author);
        printf("Price: ");
        scanf("%f",&b[i].price);
    }
    printf("\n\n----price of book more than 500----\n\n");
    for(i=0;i<n;i++){
        if(b[i].price>=500){
            printf("id-%d\ntitle-%s\nauthor name-%s\n",b[i].id,b[i].title,b[i].author);
            printf("\n");
        }
    }
    return 0;
}
