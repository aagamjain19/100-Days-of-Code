#include <stdio.h>

int main() {
    char str[1000];

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }

    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] -= 32;

    printf("%s", str);

    return 0;
}