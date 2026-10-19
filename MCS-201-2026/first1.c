
#include <stdio.h>

int main()
{

    int num, rem;
    int bin[32];
    int i = 0, j;

    // here Input a decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Please enter a non-negative number.");
        return 0;
    }

    if (num == 0)
    {
        printf("Binary number is: 0");
        return 0;
    }

    // Convert decimal number to binary number system
    while (num > 0)
    {
        rem = num % 2;
        bin[i] = rem;
        i++;

        num = num / 2;
    }

    // Print binary digits in reverse order
    printf("Binary number is: ");

    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", bin[j]);
    }

    printf("\n");

    return 0;
}
