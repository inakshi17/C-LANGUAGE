#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char ch;
    int count = 0;
    int in_word = 0;
    fptr = fopen("hello.txt", "r");
    while ((ch = fgetc(fptr)) != EOF) {
        putchar(ch);
        if (ch == ' ' || ch == '\n' || ch == '\t'){
            in_word = 0;
        } 
        else if (in_word == 0){
            in_word = 1;
            count++;
        }
    }
    printf("\nTotal number of words in file - %d", count);
    fclose(fptr);
    return 0;
}
