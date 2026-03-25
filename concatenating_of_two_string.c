#include <stdio.h>
#include <string.h>

int main() {
    char s1[100],s2[100];
    printf("enter the first string :");
    scanf("%s",s1);
    printf("enter the srcond string :");
    scanf("%s",s2);
    int i, j;
    for (i = 0; s1[i] != '\0'; i++);
    for (j = 0; s2[j] != '\0'; j++) {
        s1[i + j] = s2[j];
    }
    s1[i + j] = '\0';
    printf("Merged string: %s\n", s1);
    return 0;
}
