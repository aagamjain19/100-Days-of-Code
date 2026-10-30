#include <stdio.h>

int main() {
    int r, c, a[100][100];
    int flag = 1;

    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    int n = r < c ? r : c;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i][i] == a[j][j]) {
                flag = 0;
                break;
            }
        }
    }

    if (flag)
        printf("True");
    else
        printf("False");

    return 0;
}