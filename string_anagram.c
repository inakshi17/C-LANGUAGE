#include <stdio.h>
#include <string.h>
void sortString(char str[]) {
    int n = strlen(str);
    int i, j;
    char temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}
void checkAnagram(char str1[], char str2[]) {
    if (strlen(str1) != strlen(str2)) {
        printf("Not Anagram\n");
        return;
    }
    sortString(str1);
    sortString(str2);
    if (strcmp(str1, str2) == 0) {
        printf("Valid Anagram\n");
    } else {
        printf("Not Anagram\n");
    }
}
int main() {
    char s1[100], s2[100];
    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);
    checkAnagram(s1, s2);
    return 0;
}
