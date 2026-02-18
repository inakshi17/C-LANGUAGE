#include <stdio.h>
int divide(int a[],int n)
{int i;
printf("Elements divisible by 5: ");
for(i=0;i<n;i++)
{if(a[i]%5==0)
printf("%d ",a[i]);}
return 0;}
int main() 
{int i,n,div;
printf("Enter the number of elements: ");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{printf("Enter element %d of the array: ",i);
    scanf("%d",&a[i]);}
printf("Original array: ");
for(i=0;i<n;i++)    
{printf("%d ",a[i]);}
printf("\n");
div=divide(a,n);
return 0;
}
