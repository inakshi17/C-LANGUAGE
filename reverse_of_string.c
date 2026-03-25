#include <stdio.h>
#include <string.h>\

int main() {
    char s[100];
    printf("Enter the string: ");
    scanf("%s", s);
    int l = 0, i;
    for(l = 0; s[l] != '\0'; l++) {}
    printf("Length of the string: %d\n", l);
    for(i = 0; i < l / 2; i++) {
        temp = s[i];
        s[i] = s[l - 1 - i];
        s[l - 1 - i] = temp;
    }
    printf("Reverse string: ");
    puts(s);
    return 0;
}
