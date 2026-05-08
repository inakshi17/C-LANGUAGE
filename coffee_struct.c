#include <stdio.h>
#include <string.h>

struct coffee{
    char name[20];
    int qty;
    float price;
};
int main(){
    int n,i;
    printf("enter number of cofee:");
    scanf("%d",&n);
    struct coffee c[n];
    for(i=0;i<n;i++){
        printf("enter cofee name:");
        scanf("%s",c[i].name);
        printf("enter quantity:");
        scanf("%d",&c[i].qty);
        printf("enter price:");
        scanf("%f",&c[i].price);
    }
    for(i=0;i<n;i++){
        if(strcmp(c[i].name, "black") == 0 && c[i].qty==150){
            printf("price of black cofee : %.2f",c[i].price);
        }
    }
    return 0;
}
