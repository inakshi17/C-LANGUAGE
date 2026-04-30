#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char ch;
    int count =0;
    fptr = fopen("hello.txt", "r");
    while ((ch = fgetc(fptr)) != EOF){
        putchar(ch);
        if((ch >='a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        count++;
    }
    printf("\ntotal number of alphabet in file - %d",count);
    fclose(fptr);
    return 0;
}
