// Print all natural numbers in reverse order from n to 1.

#include <stdio.h>
int main()
{
    int num;
    printf("Please Enter The Number Range:\n");
    scanf("%d", &num);

    // Using For Loops

    for (; num >= 1; num--)
    {
        printf("%d\n", num);
    }

    // Using While Loops

    /*   while (num >= 1)
    {
        printf("%d\n", num);
        num -= 1;
    }
    */
    return 0;
}