#include <stdio.h>
int minimum(int a[],int n){
int i,mi;
mi=a[0];
for(i=0;i<n;i++){
    if(a[i]<mi){
        mi=a[i];
    }
}
printf("smallest element of an array is %d\n",mi);
return 0;
}
int maximum(int a[],int n){
int i,ma;
ma=a[0];
for(i=0;i<n;i++){
    if(a[i]>ma){
        ma=a[i];
    }
}
printf("largest element of an array is %d\n",ma);
return 0;
}

int main()
{int n,min,max;
printf("enter the number of element in an array:");
scanf("%d",&n);
int a[n],i;
for(i=0;i<n;i++){
    printf("enter %d element of the array:",i+1);
    scanf("%d",&a[i]);
}
printf("original array: ");
for(i=0;i<n;i++){
    printf("%d ",a[i]);
}
printf("\n");
min=minimum(a,n);
max=maximum(a,n);
return 0;
}
