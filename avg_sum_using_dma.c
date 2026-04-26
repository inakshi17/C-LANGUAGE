#include <stdio.h>
#include <stdlib.h>

struct array{
    float number[4];
    float avg;
    float sum;
};
int main(){
    int n,i,j;
    struct array *a;
    printf("enter the number of array you want to calculate :");
    scanf("%d",&n);
    a= (struct array*)malloc(n*sizeof(struct array));
    for(i=0;i<n;i++){
        printf("\nenter the element for array %d-\n",i+1);
        float s=0;
        for(j=0;j<4;j++){
            printf("element %d-",j+1);
            scanf("%f",&a[i].number[j]);
            s=s+a[i].number[j];
        }
        a[i].sum=s;
        a[i].avg=s/4;
    }
    printf("\n----result----\n");
    for(i=0;i<n;i++){
        printf("\nfor array %d-\n",i+1);
        printf("sum = %.2f\navg = %.2f\n", a[i].sum, a[i].avg);
    }
    free(a);
    return 0;
}
