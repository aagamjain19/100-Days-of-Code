#include <stdio.h>

int main()
{
    long long num;
    int digit, i;
    int freq[10] = {0};
    int maxDigit = 0, maxCount = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    if (num < 0)
    {
        num = -num;
    }

    if (num == 0)
    {
        freq[0] = 1;
    }

    while (num != 0)
    {
        digit = num % 10;
        freq[digit]++;
        num = num / 10;
    }

    for (i = 0; i < 10; i++)
    {
        if (freq[i] > maxCount)
        {
            maxCount = freq[i];
            maxDigit = i;
        }
    }

    printf("Most frequent digit = %d\n", maxDigit);
    printf("It occurs %d times.\n", maxCount);

    return 0;
}