#include <stdio.h>
#include <string.h>
int main() {
    char str[100],temp;
    int i, j, n;
    printf("Enter a string: ");
    gets(str);
    n = strlen(str);
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++){
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("Sorted string: %s\n", str);
    return 0;
}
