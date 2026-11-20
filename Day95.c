#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student findTop(struct Student s[], int n) {
    struct Student top = s[0];
    int i;

    for (i = 1; i < n; i++) {
        if (s[i].marks > top.marks) {
            top = s[i];
        }
    }

    return top;
}

int main() {
    struct Student s[5];
    struct Student top;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter name, roll number and marks: ");
        scanf("%49s %d %f",
              s[i].name,
              &s[i].roll_no,
              &s[i].marks);
    }

    top = findTop(s, 5);

    printf("\nTop Student:\n");
    printf("Name: %s\n", top.name);
    printf("Roll No: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}