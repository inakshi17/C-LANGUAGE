#include <stdio.h>
int check(int n){
    int c=0;
    while(n>0){
        n=n/10;
        c++;
    }
    return c;
}
int reverse(int n){
    int rev=0;
    while(n>0){
        rev= 10*rev + (n%10);
        n=n/10;
    }
    return rev;
}
int main(){
    int n;
    printf("enter the number of element in the array :");
    scanf("%d",&n);
    int a[n],*A,i;
    A=a;
    for(i=0;i<n;i++){
        printf("enter the element %d :",i+1);
        scanf("%d",(A+i));
    }
    printf("original array-\n");
    for(i=0;i<n;i++){
        printf("%d ",*(A+i));
    }
    int r,c;
    for(i=0;i<n;i++){
        c=check(*(A+i));
        if(c==2){
            r=reverse(*(A+i));
            *(A+i)=r;
        }
    }
    printf("\nNew array:\n");
    for(i=0;i<n;i++) {
        printf("%d ", *(A + i));
    }
    return 0;
}
