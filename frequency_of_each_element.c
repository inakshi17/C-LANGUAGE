#include <stdio.h>
int main()
{
    int a[100],i,j,n,count;
    printf("enter the value of n:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("enter the elements:");
        scanf("%d",&a[i]);
    }
    for (i = 0; i < n; i++) {
        if (a[i] != -1) {   
            count = 1;
            for (j = i + 1; j < n; j++) {
                if (a[i] == a[j]) {
                    count++;
                    a[j] = -1;
                }
            }
            printf("frequency of %d = %d\n", a[i], count);
        }
    }
    return 0;
}
