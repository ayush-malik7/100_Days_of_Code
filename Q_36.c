#include <stdio.h>

int main() {
    int a, b, i, hcf = 1;
    printf("Enter number a: ");
    scanf("%d", &a);
    printf("Enter number b: ");
    scanf("%d", &b);

    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0)
            hcf = i;  // 
    }

    printf("HCF = %d\n", hcf);
    return 0;
}
