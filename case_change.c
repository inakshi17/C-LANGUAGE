#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char str[100];
    printf("enter the string :");
    gets(str);
    printf("original string -\n");
    puts(str);
    int i;
    for(i=0;str[i] != '\0';i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
        else if (str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        }
        else str[i] =str[i];
    }
    printf("new string -\n");
    puts(str);
    return 0;
}
