// Display a number in reverse order Entered By The User...

#include <stdio.h>
int main()
{
    int num, digit, rev = 0;
    printf("Please Enter A Number:\n");
    scanf("%d", &num);
    while (num != 0)
    {
        digit = num % 10;
        rev = 10 * rev + digit;
        num = num / 10;
    }
    printf("Reverse Of The Given Number Is:%d\n", rev);
    return 0;
}
