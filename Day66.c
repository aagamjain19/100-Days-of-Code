#include <stdio.h>

int main() {
    int n, target, nums[1000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    scanf("%d", &target);

    for (int i = 0; i < n; i++) {

        for (int j = i + 1; j < n; j++) {

            if (nums[i] + nums[j] == target) {
                printf("%d %d", i, j);
                return 0;
            }
        }
    }

    printf("-1 -1");

    return 0;
}