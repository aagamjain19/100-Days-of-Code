#include <stdio.h>

int main() {
    int n, a[1000];
    long long answer[1000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    long long prefix = 1;

    for (int i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= a[i];
    }

    long long suffix = 1;

    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= a[i];
    }

    for (int i = 0; i < n; i++)
        printf("%lld ", answer[i]);

    return 0;
}