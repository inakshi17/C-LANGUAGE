#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    printf("enter your string : ");
    gets(s);
    int i,j;
    for(i=0;s[i]!= '\0';i++){}
    int l=i;
    for(i=0;i<l;i++){
        int c=0;
        char temp;
        temp=s[i];
        for(j=0;j<l;j++){
            if(s[j]==temp){
                c++;
            }
        }
        if(c==1){
            printf("%c appear only once in string\n",s[i]);
        }
    }
    return 0;
}
