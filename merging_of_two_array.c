#include <stdio.h>
int main()
{int n;
printf("enter the number of element of 1 array:");
scanf("%d",&n);
int a[n],i;
for(i=0;i<n;i++){
    printf("enter the element %d:",i+1);
    scanf("%d ",&a[i]);
}
printf("\n");
printf("first array\n");
for(i=0;i<n;i++){
    printf("%d ",a[i]);
}
int m;
printf("enter the number of element of 2 array:");
scanf("%d",&m);
int b[m],j;
for(j=0;j<m;j++){
    printf("enter the element %d:",j+1);
    scanf("%d ",&b[j]);
}
printf("\n");
printf("second array\n");
for(j=0;j<m;j++){
    printf("%d",b[j]);
}
int c[n + m];
for(i = 0; i < n; i++) {
    c[i] = a[i];
}
for(j = 0; j < m; j++) {
    c[n + j] = b[j];
}
printf("\nMerged array:\n");
for(i = 0; i < n + m; i++) {
    printf("%d ", c[i]);
}
return 0;
}
