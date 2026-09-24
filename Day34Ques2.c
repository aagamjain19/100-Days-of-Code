#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n)
    {
        printf("Invalid position.\n");
        return 1;
    }

    // Shift elements to the left
    for (i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Array after deletion:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}