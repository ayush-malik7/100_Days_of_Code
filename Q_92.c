// Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>
#include <string.h>

int main() {
    char arr[100];
    int freq[26] = {0};  

    printf("Enter the string: ");
    fgets(arr, 100, stdin);

    for (int i = 0; arr[i] != '\0'; i++) {
        char ch = arr[i];

        if (ch >= 'a' && ch <= 'z') {     
            freq[ch - 'a']++;             

            if (freq[ch - 'a'] == 2) {   
                printf("First repeating character: %c\n", ch);
                return 0;
            }
        }
    }

    printf("No repeating lowercase alphabet found.\n");

    return 0;
}
