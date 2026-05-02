#include <stdio.h>

int main(){
    int n;
    printf("enter the digit :");
    scanf("%d",&n);
    int i,d;
    n=n%10;
    if(n%3==0){
        printf("square of last digit : %d",n*n);
    }
    else printf("cube of last digit : %d",n*n*n);
    return 0;
}
