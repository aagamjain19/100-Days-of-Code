#include <stdio.h>

int main()
{
    int num1, num2, i, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    for (i = 1; ; i++)
    {
        if (i % num1 == 0 && i % num2 == 0)
        {
            lcm = i;
            break;
        }
    }

    printf("LCM = %d\n", lcm);

    return 0;
}