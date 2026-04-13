#inclde <stdio.h>
#include <string.h>

int main(){
    char s1[100],s2[100];
    printf("enter the first string :");
    gets(s1);
    printf("enter the first string :");
    gets(s2);
    int count[256] = {0}; 
    if (strlen(s1) != strlen(s2)) {
        printf("Not an anagram\n");
        return 0;
    }
    for (int i = 0; s1[i] != '\0'; i++) {
        count[(int)s1[i]]++; 
        count[(int)s2[i]]--;
    }
    for (int i=0;i<256;i++) {
        if (count[i] != 0) {
            printf("Not an anagram\n");
            return 0;
        }
    }
    printf("It is an anagram!\n");
    return 0;
}
