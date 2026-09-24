#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, element, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    // Find appropriate position
    pos = 0;

    while (pos < n && arr[pos] < element)
    {
        pos++;
    }

    // Shift elements to the right
    for (i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[pos] = element;

    n++;

    printf("Array after insertion:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}