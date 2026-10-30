#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    int ch;

    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("File does not exist");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);

    fclose(fp);

    return 0;
}