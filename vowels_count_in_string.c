#include <stdio.h>
int main(){
    char s[100],c=0;
    printf("Enter first string: ");
    scanf("%s", s);
    int l,i,countv=0,countc=0;
    for(l=0;s[l]!='\0';l++){}
    for(i=0;i<l;i++){
        if(s[i]>='0' && s[i]<='9') {}
        else if(s[i]=='a' || s[i]=='A'  || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U')
        countv++;
        else countc++;
    }
    printf("count of vowels - %d\n",countv);
    printf("count of consonants - %d\n",countc);
    return 0;
}
