#include <stdio.h>
#include <math.h>

int main()
{
    double P, R, T;
    double SI, CI, amount;

    scanf("%lf %lf %lf", &P, &R, &T);

    SI = (P * R * T) / 100.0;

    amount = P * pow((1 + R / 100.0), T);
    CI = amount - P;

    printf("Simple Interest=%.0f, Compound Interest=%.2f\n", SI, CI);

    return 0;
}