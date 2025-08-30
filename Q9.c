#include <stdio.h>
#include <math.h>

int main() {
    double p, r, t;
    double simpleInterest, compoundInterest;

    // Input principal (p), rate (r) and time (t)
    printf("Enter principal amount (p): ");
    scanf("%lf", &p);
    printf("Enter rate of interest (r) in %%: ");
    scanf("%lf", &r);
    printf("Enter time period (t) in years: ");
    scanf("%lf", &t);

    // Calculate simple interest
    simpleInterest = (p * r * t) / 100;

    // Calculate compound interest
    compoundInterest = p * pow((1 + r / 100), t) - p;

    // Display results
    printf("Simple Interest = %.2lf\n", simpleInterest);
    printf("Compound Interest = %.2lf\n", compoundInterest);

    return 0;
}
