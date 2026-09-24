#include <stdio.h>

int main()
{
    int num, original, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0)
    {
        remainder = num % 10;

        sum = sum + (remainder * remainder * remainder);

        num = num / 10;
    }

    if (original == sum)
    {
        printf("Armstrong number.\n");
    }
    else
    {
        printf("Not an Armstrong number.\n");
    }

    return 0;
}