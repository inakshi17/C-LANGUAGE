#include <stdio.h>
int main(){
    int a,b,c,*p,*q,*r;
    p=&a;
    q=&b;
    r=&c;
    printf("enter first number :");
    scanf("%d",p);
    printf("enter second number :");
    scanf("%d",q);
    *r=*p;
    *p=*q;
    *q=*r;
    printf("first number :%d\n",*p);
    printf("second number :%d",*q);
    return 0;
}
