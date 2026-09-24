#include <stdio.h>

int main()
{
    int binary[100];
    int n, i;

    printf("Enter number of binary digits: ");
    scanf("%d", &n);

    printf("Enter binary digits: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &binary[i]);
    }

    printf("1's complement = ");

    for (i = 0; i < n; i++)
    {
        if (binary[i] == 0)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }

    printf("\n");

    return 0;
}