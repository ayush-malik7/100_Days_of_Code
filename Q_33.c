#include <stdio.h>

int main() {
    int n, temp, digit, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    for (temp = n; temp > 0; temp /= 10) {
        digit = temp % 10;
        sum += digit * digit * digit; 
    }

    printf("%d is %s an Armstrong number\n", n, (sum == n) ? "" : "not");
    return 0;
}
