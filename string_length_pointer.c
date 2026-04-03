#include <stdio.h>
int main() {
    char str[100];
    char *S;
    int count = 0;
    printf("Enter a string: ");
    gets(str);
    S = str;
    while (*S != '\0'){
        if (*S == '\n') {
            break; 
        }
        count++;
        S++; 
    }
    printf("The length of the string is: %d\n", count);
    return 0;
}
