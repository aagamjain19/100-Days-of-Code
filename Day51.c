#include <stdio.h>

int main() {
    int n, target, a[1000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &target);

    int low = 0, high = n - 1;
    int first = -1, last = -1;

    // First occurrence
    while (low <= high) {
        int mid = (low + high) / 2;

        if (a[mid] == target) {
            first = mid;
            high = mid - 1;
        }
        else if (a[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    low = 0;
    high = n - 1;

    // Last occurrence
    while (low <= high) {
        int mid = (low + high) / 2;

        if (a[mid] == target) {
            last = mid;
            low = mid + 1;
        }
        else if (a[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("%d,%d", first, last);

    return 0;
}