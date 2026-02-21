#unclude <stdio.h>
int main()
{
    int n, rev = 0, digit;

    printf("enter the number: ");
    scanf("%d", &n);
    while (n > 0)
    {   digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    while (rev > 0)
    {
        digit = rev % 10;

        if (digit == 0) printf("zero ");
        else if (digit == 1) printf("one ");
        else if (digit == 2) printf("two ");
        else if (digit == 3) printf("three ");
        else if (digit == 4) printf("four ");
        else if (digit == 5) printf("five ");
        else if (digit == 6) printf("six ");
        else if (digit == 7) printf("seven ");
        else if (digit == 8) printf("eight ");
        else if (digit == 9) printf("nine ");

        rev = rev / 10;
    }

    return 0;
}
