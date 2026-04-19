#include<stdio.h>
int main(){
    float b,h,a;
    printf("Base & Height: ");
    scanf("%f %f",&b,&h);
    a=0.5*b*h;
    printf("Area: %.2f",a);
    return 0;
}
