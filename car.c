#include <stdio.h>
#include <stdlib.h>

struct car{
    int no;
    char brand[50];
    char model[50];
    int price;
};
int main(){
    int n,i;
    printf("enter the number of cars :");
    scanf("%d",&n);
    struct car c[n];
    for(i=0;i<n;i++){
        printf("---enter the details of car %d ---\n",i+1);
        printf("no :");
        scanf("%d",&c[i].no);
        getchar();
        printf("price :");
        scanf("%d",&c[i].price);
        getchar();
        printf("model name :");
        gets(c[i].model);
        getchar();
        printf("brand name :");
        gets(c[i].brand);
        getchar();
    }
    printf("\n\n---expensive car---\n\n");
    for(i=0;i<n;i++){
        if(c[i].price >= 1000000){
            printf("no-%d\nmodel-%s\nbrand-%s\n",c[i].no,c[i].model,c[i].brand);
        }
    }
    return 0;
}
