#include <stdio.h>
int prime(int n){
    int i,c=0;
    for(i=1;i<n;i++){
        if(n%i==0)
        c++;
    }
    if(c==1)
    return 1;
    else 
    return 0;
}
int perfect(int n){
    int s=0,d,i;
    for(i=1;i<n;i++){
        if(n%i==0){
            s=s+i;
        }
    }
    if(s==n)
    return 1;
    else 
    return 0;
}
int armstrong(int n){
    int s=0,i,m,d;
    m=n;
    while(n>0){
        d=n%10;
        s=s+(d*d*d);
        n=n/10;
    }
    if(m==s)
    return 1;
    else
    return 0;
}
int main(){
    int n,p,pe,a;
    printf("enter the number :");
    scanf("%d",&n);
    p=prime(n);
    pe=perfect(n);
    a=armstrong(n);
    if(p==1) printf("1");
    else if(pe==1) printf("2");
    else if(a==1) printf("3");
    else return 0;
}
