#include <stdio.h>
int power(int n,int m){
    if (m==0) return 1;
    else return n*power(n,m-1);
}
int main(){
    int n,i,sum=0;;
    printf("enter your number :");
    scanf("%d",&n);
    if(n==0) printf("sum=%d",sum);
    else{
        for(i=1;i<=n;i++){
        sum=sum+power(i,i);
        }
        printf("sum=%d",sum);
    }
    return 0;    
}
