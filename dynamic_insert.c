int main() {
    int n, pos, val, *arr;
    printf("Array size: ");
    scanf("%d", &n);
    arr = (int*)malloc(n * sizeof(int));
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Position and Value to insert: ");
    scanf("%d %d", &pos, &val);
    arr = realloc(arr, (n + 1) * sizeof(int));
    for(int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = val;
    for(int i = 0; i <= n; i++) printf("%d ", arr[i]);
    free(arr);
    return 0;
}
