#include <stdio.h>

int main() {
    int n, i, flag = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    if (n < 2) flag = 1;

    for (i = 2; i*i <= n && !flag; i++)
        if (n % i == 0) flag = 1;

    printf("%d is %sprime\n", n, flag ? "not " : "");
    return 0;
}
