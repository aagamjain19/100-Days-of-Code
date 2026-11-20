#include <stdio.h>

enum Month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main() {
    int month;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case JANUARY:
        case MARCH:
        case MAY:
        case JULY:
        case AUGUST:
        case OCTOBER:
        case DECEMBER:
            printf("31 days");
            break;

        case APRIL:
        case JUNE:
        case SEPTEMBER:
        case NOVEMBER:
            printf("30 days");
            break;

        case FEBRUARY:
            printf("28 or 29 days");
            break;

        default:
            printf("Invalid month");
    }

    return 0;
}