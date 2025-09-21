#include <stdio.h>
#include <string.h>
int main() {
    char bin[65];
    printf("Enter a binary number: ");
    scanf("%s", bin);
    printf("1's complement: ");
    for (int i = 0; i < strlen(bin); i++) {
        if (bin[i] == '0')
        printf("1");
        else if(bin[i] == '1')
         printf("0");
        else{
        printf("\nInvalid binary number!\n");
        return 0;
        }}
    printf("\n");
    return 0;
}
