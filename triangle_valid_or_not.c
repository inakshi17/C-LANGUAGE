#include <stdio.h>
int main(){
    float a1,a2,a3,ta;
    printf("enter 1 angle of triangle:");
    scanf("%f",&a1);
    printf("enter 2 angle of triangle:");
    scanf("%f",&a2);
    printf("enter 3 angle of triangle:");
    scanf("%f",&a3);
    ta=a1+a2+a3;
    if(ta==180){
        printf("triangle is valid");
    }
    else{
        printf("triangl is invalid");
    }
    return 0;
}
