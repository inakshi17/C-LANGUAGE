#include <stdio.h>
#include <stdlib.h>

int main(){
    char str1[100];
    char str2[100];
    printf("enter first string :");
    gets(str1);
    printf("enter second string :");
    gets(str2);
    char *a ,*b;
    a=str1;
    b=str2;
    int l1=0,l2=0;
    while(*a != '\0'){ l1++; a++;}
    while(*b != '\0'){ l2++; b++;}
    if(l1 != l2){
        printf("string are not equal !!");
        return 0;
    }
    a = str1;
    b = str2;
    int flag=0;
    while(*a != '\0'){
        if( *a != *b){
            printf("strings are not equal !!");
            break;
        }
        a++;
        b++;
        flag ++;
    }
    if(flag==l1){
        printf("strings are same");
    }
    return 0;
}
