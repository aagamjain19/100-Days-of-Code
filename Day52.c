#include <stdio.h>

int main() {
    int n, x, a[1000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);

    int low = 0, high = n - 1;
    int answer = -1;

    while (low <= high) {

        int mid = (low + high) / 2;

        if (a[mid] >= x) {
            answer = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    printf("%d", answer);

    return 0;
}