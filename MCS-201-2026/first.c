
#include <stdio.h>

int main()
{
    
    int n, remainder;
    int binary[32];
    int i = 0, j;

    // Input a decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Please enter a non-negative number.");
        return 0;
    }

    if (n == 0)
    {
        printf("Binary number is: 0");
        return 0;
    }

    // Convert decimal to binary
    while (n > 0)
    {
        remainder = n % 2;
        binary[i] = remainder;
        i++;

        n = n / 2;
    }

    // Print binary digits in reverse order
    printf("Binary number is: ");

    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }

    printf("\n");

    return 0;
}
