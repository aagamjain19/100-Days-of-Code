c
#include <stdio.h>

int main()
{
    int n, i;
    double sum = 1.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        sum = sum + (double)(2 * i - 1) / (2 * i);
    }

    printf("Sum = %.2lf\n", sum);

    return 0;
}