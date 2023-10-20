// Print the multiplication table within a range given by the user.

#include <stdio.h>
int main()
{
    int num, range, i;
    printf("Please Enter Multiplication Table Number:\n");
    scanf("%d", &num);
    printf("Enter Range Of Multiplication:\n");
    scanf("%d", &range);
    printf("********************\n");
    for (i = 1; i <= range; i++)
    {
        printf("%d X %d = %d\n", num, i, num * i);
    }
    return 0;
}
