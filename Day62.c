#include <stdio.h>

int main() {
    int n, a[1000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int current = a[0];
    int maxSum = a[0];

    for (int i = 1; i < n; i++) {

        if (current + a[i] > a[i])
            current = current + a[i];
        else
            current = a[i];

        if (current > maxSum)
            maxSum = current;
    }

    printf("%d", maxSum);

    return 0;
}