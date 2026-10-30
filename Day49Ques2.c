#include <stdio.h>
#include <string.h>

int main() {
    char name[1000];
    int lastSpace = -1;

    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    if (lastSpace == -1) {
        printf("%s", name);
        return 0;
    }

    printf("%c. ", name[0]);

    for (int i = 1; i < lastSpace; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ')
            printf("%c. ", name[i]);
    }

    printf("%s", &name[lastSpace + 1]);

    return 0;
}