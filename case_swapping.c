#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    printf("enter the first string :");
    gets(s);
    int i;
    for(i=0;s[i]!='\0';i++){
        if(s[i]>='A' && s[i] <= 'Z'){
            s[i] = s[i]+32;
        }
        else if (s[i] >= 'a' && s[i] <='z'){
            s[i] = s[i]-32;
        }
    }
    printf("Swapped:");
    puts(s);
    return 0;
}
