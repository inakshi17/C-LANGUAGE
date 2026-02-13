int findElement(int a[], int n)
 {int p;
    printf("Enter the element to find: ");
    scanf("%d", &p);
    for (int i = 0; i < n; i++)
    {if (a[i] == p) 
    printf("Element found at index: %d\n", i);}
    return 0;}
int main()
{int n;
 printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) 
    {printf("Enter element %d: ", i);
        scanf("%d", &a[i]);}
     for(int i = 0; i < n; i++) {
        printf("%d ",a[i]);}
        printf("\n");
findElement(a, n);
    return 0;
}
