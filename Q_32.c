#include <stdio.h>

int main() {
    int n, rev = 0, temp;
    printf("Enter number: ");
    scanf("%d", &n);

    for (temp = n; temp; temp /= 10)
        rev = rev * 10 + temp % 10;

    printf("%d is %s palindrome\n", n, (n == rev) ? "" : "not a");
    return 0;
}
