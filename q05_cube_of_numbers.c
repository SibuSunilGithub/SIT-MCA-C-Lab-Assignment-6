// Display the cube of a number between 1 to n. (Between Means Not Include 1 & n.)

#include <stdio.h>
#include <math.h>
int main()
{
    int num, cube;
    printf("Please Enter The number Range:\n");
    scanf("%d", &num);
    for (int i = 2; i < num; i++)
    {
        cube = pow(i, 3);
        printf("Cube Of %d Is: %d\n", i, cube);
    }
    return 0;
}