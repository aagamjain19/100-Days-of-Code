#include <stdio.h>

int main() {
    int n, a[1000];
    int seen[10000] = {0};

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++) {

        if (seen[a[i]]) {
            printf("%d", a[i]);
            return 0;
        }

        seen[a[i]] = 1;
    }

    printf("-1");

    return 0;
}