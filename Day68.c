#include <stdio.h>

int main() {
    int n;
    long long sum = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        int x;
        scanf("%d", &x);

        sum += x;
    }

    long long expected = (long long)n * (n + 1) / 2;

    printf("%lld", expected - sum);

    return 0;
}