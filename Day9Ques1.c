#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2, realPart, imagPart;

    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Roots are real and different: %g, %g", root1, root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);

        printf("Roots are real and same: %g", root1);
    } else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);

        printf("Roots are complex");
    }

    return 0;
}