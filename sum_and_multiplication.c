#include <stdio.h>
int count(int n){
    int p=1,s=0,d,c=0;
    int m=n;
    while(m>0){
        d=m%10;
        s+=d;
        p*=d;
        c++;
        m=m/10;
    }
    if(c%2==0){
        printf("sum of the digit: %d\n",s);
    }
    else{
        printf("multiplication of digit: %d\n",p);
    }
    printf("number of digit in %d: %d\n",n,c);
    return 0;
}
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    count(n);
    return 0;
}
