//  Find all prime numbers between 1 to n.
/*
Code Solve Approach: 
1. First We Solve How To Check Prime Or Not.
2. We Print The Number If It Is Prime.
Here Use 2 For Loops - One Inner Loop For Check Prime And Outer Loop For  Print That Number.
*/

#include <stdio.h>

int main()
{
    int i, num, n, count;
    printf("Enter the range: ");
    scanf("%d", &n);
    printf("The prime numbers in between the range 1 to %d:\n", n);
    for (num = 1; num <= n; num++)
    {
        count = 0;
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0 && num != 1)
            printf("%d ", num);
    }
    return 0;
}

