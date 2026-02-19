#include <stdio.h>
int main()
{int n,i,j;
printf("Enter the size of square matrix: ");
scanf("%d",&n);
int a[n][n];
for(i=0;i<n;i++)
{for(j=0;j<n;j++)
{printf("Enter element [%d][%d]: ",i,j);
scanf("%d",&a[i][j]);}};
printf("Original matrix:\n");
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        printf("%d ",a[i][j]);
    }printf("\n");}
printf("Pattern matrix:\n");
for(i=0;i<n;i++)
{for(j=0;j<n;j++)
{if(j>=i)
printf("%d ",a[i][j]);
else
printf("  ");}  // two space is important for the pattern to be clear
printf("\n");}
return 0;
}
