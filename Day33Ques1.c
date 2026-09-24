#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, search;
    int low, high, mid;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == search)
        {
            found = 1;
            break;
        }
        else if (search < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if (found == 1)
    {
        printf("Element found at position %d\n", mid + 1);
    }
    else
    {
        printf("Element not found.\n");
    }

    return 0;
}