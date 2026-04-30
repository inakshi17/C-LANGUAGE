#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destFile;
    char ch;
    sourceFile = fopen("hello.txt", "r");
    destFile = fopen("destination.txt", "w");
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
        putchar(ch);
    }
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}
