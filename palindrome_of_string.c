#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    int c = 0;
    printf("Enter string: ");
    scanf("%s", s);
    int l = strlen(s);
    for (int i = 0; i < l / 2; i++) {
        if (s[i] != s[l - 1 - i]) {
            c = 1;
            break;
        }
    }
    if (c == 0) {
        printf("%s is a palindrome.\n", s);
    } else {
        printf("%s is not a palindrome.\n", s);
    } 
    return 0;
}
