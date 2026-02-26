#include <stdio.h>
int factorial(int n){
    if(n<=0)
    return 1;
    return n*factorial(n-1);
}
int power(int x,int y){
    if(y==0)
    return 1;
    return x*power(x,y-1);
}
int main(){
    int ch;
    printf("1-factorial\n");
    printf("2-power of a number\n");
    printf("enter your choice-");
    scanf("%d",&ch);
    if(ch==1){
        int n,f;
        printf("enter your number : ");
        scanf("%d",&n);
        f=factorial(n);
        printf("result : %d",f);
    }
    else if(ch==2){
        int x,y,p;
        printf("enter the number and power of the number : ");
        scanf("%d%d",&x,&y);
        p=power(x,y);
        printf("result : %d",p);
    }
    else{
        printf("invalid choice");
    }
    return 0;
}
