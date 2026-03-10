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
    int rev=0,d;
    for(i=0;i<n;i++){
        while(a[i]>0){
            d=a[i]%10;
            rev=rev*10+d;
            a[i]=a[i]/10;
        }
        a[i]=rev;
        rev=0;
    }
    printf("\nreverse of every element-\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
