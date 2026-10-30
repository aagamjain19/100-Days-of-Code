#include <stdio.h>

int main() {
    FILE *input, *output;
    int ch;

    input = fopen("input.txt", "r");

    if (input == NULL) {
        printf("input.txt not found");
        return 1;
    }

    output = fopen("output.txt", "w");

    if (output == NULL) {
        printf("Cannot create output.txt");
        fclose(input);
        return 1;
    }

    while ((ch = fgetc(input)) != EOF) {

        if (ch >= 'a' && ch <= 'z')
            ch = ch - 32;

        fputc(ch, output);
    }

    fclose(input);
    fclose(output);

    printf("Conversion completed");

    return 0;
}