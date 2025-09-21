#include <stdio.h>
int main() {
    int n , product =1;
    printf("Enter  numbers: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if ( i % 2 != 0){
            product =  product*i;
        }}
    printf("%d\n",  product);
    return 0;
}
