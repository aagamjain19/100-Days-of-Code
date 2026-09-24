#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int largest, second;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];

    // Find largest element
    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    // Find second largest distinct element
    for (i = 0; i < n; i++)
    {
        if (arr[i] != largest)
        {
            if (found == 0 || arr[i] > second)
            {
                second = arr[i];
                found = 1;
            }
        }
    }

    if (found == 1)
    {
        printf("Second largest element = %d\n", second);
    }
    else
    {
        printf("Second largest element does not exist.\n");
    }

    return 0;
}