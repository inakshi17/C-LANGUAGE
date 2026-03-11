#include <stdio.h>
int power(int n,int m){
    if(m==0) return 1;
    else return n*power(n,m-1);
}
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    int i,s=0;
    for(i=0;i<=n;i+=2){
        s=s+power(i,i);
    }
    printf("sum of the series : %d",s);
    return 0;
}
