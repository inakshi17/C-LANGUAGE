#include <stdio.h>
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int strong(int n){
    int d,s=0;
    while(n>0){
        d=n%10;
        s+=fact(d);
        n=n/10;
    }
    return s;
}
int main(){
    int n,m;
    printf("enter number: ");
    scanf("%d",&n);
    m=strong(n);
    if(n==m){
        printf("\n%d is a strong number",n);
    }
    else{
        printf("\n%d is not a strong number",n);
    }
    return 0;
}
