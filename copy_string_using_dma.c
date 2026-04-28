#include <stdio.h>
#include <stdlib.h>
int main(){
    char str[100],copy[100];
    printf("enter string :");
    gets(str);
    char *s,*c;
    s=str;
    c=copy;
    while( *s != '\0'){
        *c = *s;
        s++;
        c++;
    }
    *c='\0';
    printf("\noriginal string-");
    puts(str);
    printf("\ncopy string -");
    puts(copy);
    return 0;
}
