#include <stdio.h>
int main() {
    int n ,sum = 1 , a;
    printf("Enter  numbers: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        a =n % 10;
        sum = sum+a; 
        n=n/10;   }
    printf("%d\n", sum);
    return 0;
}
