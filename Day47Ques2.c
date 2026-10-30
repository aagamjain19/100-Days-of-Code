#include <stdio.h>

int main() {
    char str[1000];
    int start = 0, len = 0;
    int maxStart = 0, maxLen = 0;

    fgets(str, sizeof(str), stdin);

    for (int i = 0; ; i++) {

        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
            if (len == 0)
                start = i;
            len++;
        }
        else {
            if (len > maxLen) {
                maxLen = len;
                maxStart = start;
            }

            len = 0;

            if (str[i] == '\0')
                break;
        }
    }

    for (int i = maxStart; i < maxStart + maxLen; i++)
        printf("%c", str[i]);

    return 0;
}