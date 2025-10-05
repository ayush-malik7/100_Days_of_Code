#include <stdio.h>
#include <math.h>
int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;
    printf("Enter any number: ");
    scanf("%d", &num);
    lastDigit = num % 10; 
    digits = (int)log10(num);   
    firstDigit = num / pow(10, digits);  
    int middle = num % (int)pow(10, digits);
    middle = middle / 10;
    swappedNum = lastDigit * pow(10, digits) + middle * 10 + firstDigit;
    printf("Number after swapping first and last digit: %d\n", swappedNum);
    return 0;
}
