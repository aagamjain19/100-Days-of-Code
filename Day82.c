#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    enum TrafficLight light;
    int choice;

    printf("Enter 0 for RED, 1 for YELLOW, 2 for GREEN: ");
    scanf("%d", &choice);

    light = choice;

    switch (light) {
        case RED:
            printf("Stop");
            break;

        case YELLOW:
            printf("Wait");
            break;

        case GREEN:
            printf("Go");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}