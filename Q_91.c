//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/

#include <stdio.h>

int main() {
    char arr[100], result[100];
    int j = 0;

    printf("Enter a string: ");
    fgets(arr, 100, stdin);

    for (int i = 0; arr[i] != '\0'; i++) {

        char ch = arr[i];

        
        if (ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u' ||
            ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U') {
            continue;   
        }

        result[j++] = ch;  
    }
    result[j] = '\0';   
    printf("Output: %s", result);
    return 0;   
}
