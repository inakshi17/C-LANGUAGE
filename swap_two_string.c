#include <stdio.h>

int main() {
    char s1[100], s2[100], temp[100];
    int i;
    printf("enter the first string : ");
    scanf("%s", s1);
    printf("enter the second string : ");
    scanf("%s", s2);
    for (i = 0; s1[i] != '\0'; i++) {
        temp[i] = s1[i];
    }
    temp[i] = '\0';
    for (i = 0; s2[i] != '\0'; i++) {
        s1[i] = s2[i];
    }
    s1[i] = '\0';
    for (i = 0; temp[i] != '\0'; i++) {
        s2[i] = temp[i];
    }
    s2[i] = '\0';
    printf("After swap:\n");
    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);
    return 0;
}
