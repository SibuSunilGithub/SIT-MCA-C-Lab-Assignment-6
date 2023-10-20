// Print all even numbers and odd numbers from 1 to 20...

#include <stdio.h>
int main()
{
    int num = 20;
    printf("All Even Numbers From 1-20\n");
    printf("--------------------------\n");
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
    printf(" \n");
    printf("All Odd Numbers From 1-20\n");
    printf("--------------------------\n");
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }
}