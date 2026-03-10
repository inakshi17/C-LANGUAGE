#include <stdio.h>
int main(){
    int n;
    printf("enter the number of element :");
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++){
        printf("enter element %d :",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf("original array-\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    int pro=1,d;
    for(i=0;i<n;i++){
        if(a[i]<0){
            a[i]=-a[i];
        }
        while(a[i]>0){
            d=a[i]%10;
            pro=pro*d;
            a[i]=a[i]/10;
        }
        a[i]=pro;
        pro=1;
    }
    printf("\nproduct of every element-\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
