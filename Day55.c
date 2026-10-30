#include <stdio.h>

int main() {
    int n, a[1000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int candidate = 0, count = 0;

    for (int i = 0; i < n; i++) {

        if (count == 0)
            candidate = a[i];

        if (a[i] == candidate)
            count++;
        else
            count--;
    }

    count = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == candidate)
            count++;
    }

    if (count > n / 2)
        printf("%d", candidate);
    else
        printf("-1");

    return 0;
}