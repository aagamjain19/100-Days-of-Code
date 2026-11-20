#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status status;
    int choice;

    printf("Enter status (0-SUCCESS, 1-FAILURE, 2-TIMEOUT): ");
    scanf("%d", &choice);

    status = choice;

    switch (status) {
        case SUCCESS:
            printf("Operation successful");
            break;

        case FAILURE:
            printf("Operation failed");
            break;

        case TIMEOUT:
            printf("Operation timed out");
            break;

        default:
            printf("Invalid status");
    }

    return 0;
}