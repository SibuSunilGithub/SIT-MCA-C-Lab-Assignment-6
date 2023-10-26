// Enter a number and check whether it is palindrome or not.

#include <stdio.h>
int main()
{
    int num, digit, rev = 0, temp;
    printf("Enter Number:\n");
    scanf("%d", &num);
    temp = num;
    while (num != 0)
    {
        digit = num % 10;
        num = num / 10;
        rev = (rev * 10) + digit;
    }
    if (rev == temp)
    {
        printf("The Number Is Palindrome.");
    }
    else
    {
        printf("The Number Is Not Palindrome.");
    }

    return 0;
}