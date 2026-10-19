
#include <stdio.h>

int main()
{
    int i, j;

    // Outer loop controls the rows
    for (i = 1; i <= 5; i++)
    {
        // Inner loop prints numbers in each row
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
