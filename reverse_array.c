#include <stdio.h>
int reverse_array(int a[], int n)
{
    int i, t;
    for(i = 0; i < n/2; i++)
    {
        t = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = t;
    }
    printf("Reversed array: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
int main()
{
    int i, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Original array: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    reverse_array(a, n);
    return 0;
}
