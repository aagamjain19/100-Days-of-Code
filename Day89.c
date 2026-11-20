#include <stdio.h>

enum Level {
    LOW = 5,
    MEDIUM = 10,
    HIGH = 15
};

int main() {
    enum Level level;

    level = LOW;
    printf("LOW = %d\n", level);

    level = MEDIUM;
    printf("MEDIUM = %d\n", level);

    level = HIGH;
    printf("HIGH = %d\n", level);

    return 0;
}