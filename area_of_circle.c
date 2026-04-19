#include<stdio.h>
#define PI 3.14159
int main(){
    float r,a;
    printf("Radius: ");
    scanf("%f",&r);
    a=PI*r*r;
    printf("Area: %.2f",a);
    return 0;
}
