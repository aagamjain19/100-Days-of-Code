#include <stdio.h>

int main() {
    int n, a[100][100], sum = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);

            if (i == j)
                sum += a[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}