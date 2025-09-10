#include <stdio.h>

int main() {
    float a, b, c, discriminant;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("This is not a quadratic equation (a cannot be 0).\n");
        return 0;
    }

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        printf("Roots are real and distinct.\n");
    }
    else if (discriminant == 0) {
        printf("Roots are real and equal.\n");
    }
    else {
        printf("Roots are imaginary (complex).\n");
    }

    return 0;
}
