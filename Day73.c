#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    int ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;
    int last = '\0';

    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("File not found");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {

        characters++;
        last = ch;

        if (ch == '\n')
            lines++;

        if (ch == ' ' || ch == '\n' || ch == '\t') {
            inWord = 0;
        }
        else if (!inWord) {
            words++;
            inWord = 1;
        }
    }

    if (characters > 0 && last != '\n')
        lines++;

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d", lines);

    fclose(fp);

    return 0;
}