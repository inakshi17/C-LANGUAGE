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
        count++;
    }
    printf("\ntotal number of character in file - %d",count);
    fclose(fptr);
    return 0;
}
