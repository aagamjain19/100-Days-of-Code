#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, marks;
    int i;

    fp = fopen("students.txt", "w");

    if (fp == NULL) {
        printf("Unable to open file");
        return 1;
    }

    for (i = 0; i < 3; i++) {
        printf("Enter name: ");
        scanf("%49s", name);

        printf("Enter roll number: ");
        scanf("%d", &roll);

        printf("Enter marks: ");
        scanf("%d", &marks);

        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    printf("\nStudent Records:\n");

    while (fscanf(fp, "%49s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s, Roll No: %d, Marks: %d\n",
               name, roll, marks);
    }

    fclose(fp);

    return 0;
}