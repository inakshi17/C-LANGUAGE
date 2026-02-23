#include <stdio.h>
int series(int n){
    int s=0,i,d;
    printf("series- ");
    for(i=1;i<=n;i++){
        if(i%2==1){
            d=i*i;
            s+=d;
            printf("%d ",d);
        }
    }
    printf("\nsum of the series :%d",s);
    return 0;
}
int main(){
    int n;
    printf("enter number :");
    scanf("%d",&n);
    series(n);
    return 0;
}
