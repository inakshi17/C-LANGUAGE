#include <stdio.h>
int main()
{int n,i,j,sum=0,temp;
printf("enter the number of subject:");
scanf("%d",&n);
if(n>5){
int a[n];
for(i=1;i<=n;i++)
{printf("enter the marks of subject %d:",i);
    scanf("%d",&a[i]);}
for(i = 0; i < n; i++) {
    for(j = i + 1; j < n; j++) {
        if(a[i] < a[j]) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
}
for(i = 0; i <= 5; i++) {
    sum = sum + a[i];
}
printf("Sum of top 5 marks = %d\n", sum);}
else
printf("enter more then 5 subject ");
return 0;
}
