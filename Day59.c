#include <stdio.h>

int main() {
    int n, k, a[1000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("-1");
        return 0;
    }

    long long sum = 0;

    for (int i = 0; i < k; i++)
        sum += a[i];

    long long maxSum = sum;

    for (int i = k; i < n; i++) {

        sum = sum + a[i] - a[i - k];

        if (sum > maxSum)
            maxSum = sum;
    }

    printf("%lld", maxSum);

    return 0;
}