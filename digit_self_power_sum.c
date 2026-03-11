#include <stdio.h>
int power(int n,int m){
    if (m==0) return 1;
    else return n*power(n,m-1);
}
int main(){
    int n,sum=0,d;
    printf("enter your number :");
    scanf("%d",&n);
    while(n>0){
        d=n%10;
        sum=sum+power(d,d);
        n=n/10;
    }
    printf("sum=%d",sum);
    return 0;
}
