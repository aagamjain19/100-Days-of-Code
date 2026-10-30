#include <stdio.h>

int main() {
    int n, k, a[1000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &k);

    for (int i = 0; i <= n - k; i++) {

        int max = a[i];

        for (int j = i + 1; j < i + k; j++) {
            if (a[j] > max)
                max = a[j];
        }

        printf("%d ", max);
    }

    return 0;
}