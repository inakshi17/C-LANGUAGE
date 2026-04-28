int main(){
    int n,i;
    char str[100];
    printf("enter the string :");
    gets(str);
    char *s;
    s=str;
    int cv=0;
    while(*s != '\0'){
        if(*s=='a' || *s=='e'|| *s=='i'|| *s=='o'|| *s=='u'|| 
           *s=='A'|| *s=='E'|| *s=='I'|| *s=='O'|| *s=='U'){
            cv++;
        }
        s++;
    }
    printf("\nnumber of vowels : %d",cv);
    return 0;
}
