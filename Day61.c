#include <stdio.h>

int main() {
    int n, k, a[1000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &k);

    for (int i = 0; i <= n - k; i++) {

        int negative = 0;

        for (int j = i; j < i + k; j++) {

            if (a[j] < 0) {
                negative = a[j];
                break;
            }
        }

        printf("%d ", negative);
    }

    return 0;
}