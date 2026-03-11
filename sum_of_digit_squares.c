#include <stdio.h>
int sum(int n){
    int s=0,d;
    while(n>0){
        d=n%10;
        s=s+(d*d);
        n=n/10;
    }
    printf("sum of the square of digit : %d",s);
    return 0;
}
int main(){
    int n;
    printf("enterv your number :");
    scanf("%d",&n);
    sum(n);
    return 0;
}
