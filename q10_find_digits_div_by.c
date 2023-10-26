// Find all the numbers between 100 which are divisible by both 11 and 13.

#include <stdio.h>
int main()
{
    int num = 100;
    while (num != 0)
    {
        if (num % 11 == 0 && num % 13 == 0)
        {
            // There is no numbers, because 143 is the only smallest number which is divisible by both 11 & 13. 
            printf("%d", num);
        }
        num = num - 1;
    }
    return 0;
}