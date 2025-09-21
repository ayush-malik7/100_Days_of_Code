#include <stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if (n == 0) { printf("0\n"); return 0; }

    for (unsigned int mask = 1 << (sizeof(int)*8 - 1); mask > 0; mask >>= 1)
        if (n & mask) { 
            printf("1");  
            while ((mask >>= 1)) printf("%d", (n & mask) ? 1 : 0); 
            break;  
        }

    printf("\n");
    return 0;
}
