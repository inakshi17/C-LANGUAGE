#include<stdio.h>
#define PI 3.14159
int main(){
double r,h,v;
printf("Enter radius and height: ");
scanf("%lf %lf",&r,&h);
if(r<0||h<0){
printf("Invalid input");
return 1;
}
v=PI*r*r*h;
printf("Volume: %.2f",v);
return 0;
}
