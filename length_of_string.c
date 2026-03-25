int main() {
    char s[100];
    printf("Enter the string: ");
    scanf("%s", s);
    int l = 0;
    for(l = 0; s[l] != '\0'; l++) {}
    printf("Length of the string: %d\n", l);
    return 0;
}
