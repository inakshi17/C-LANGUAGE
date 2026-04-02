#include <stdio.h>
void reverse(int *N){
    int rev=0;
    while(*N>0){
        rev = 10*rev +(*N%10);
        *N=*N/10;
    }
    *N=rev; 
}
int main(){
    int n,*N;
    N=&n;
    printf("enter your number :");
    scanf("%d",N);
    reverse(N);
    printf("reverse of number : %d",n);
    return 0;
}
