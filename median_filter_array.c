#include <stdio.h>
int main(){
    int n,i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        printf("Enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\narray- ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    int x,y;
    float median;
    if(n%2==0){
        x=a[(n/2)-1];
        y=a[n/2];
        median=(x+y)/2.0;
    }
    else{
        median=a[n/2];
    }
    printf("median of the array : %.01f",median);
    int b[n];
    for(i=0;i<n;i++){
        if(a[i]>median){
            b[i]=a[i];
        }
    }
    printf("\nnew array- ");
    for(i=0;i<n;i++){
        printf("%d ",b[i]);
    }
    return 0;
}
