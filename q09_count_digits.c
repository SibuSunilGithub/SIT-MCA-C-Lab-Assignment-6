// Count the number of digits of a number.

#include <stdio.h>
int main()
{
    int num, count = 0;
    printf("Please Enter The Integer Number:\n");
    scanf("%d", &num);
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    printf("The Number Contains %d Numbers Of Digits.\n", count);
    return 0;
}