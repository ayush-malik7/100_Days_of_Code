// Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>
#include <string.h>

void reverse(char w[], int start, int end) {
    while (start < end) {
        char temp = w[start];
        w[start] = w[end];
        w[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, 200, stdin);

    str[strcspn(str, "\n")] = '\0';  

    int start = 0;

    for (int i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverse(str, start, i - 1); 
            start = i + 1; 
        }

        if (str[i] == '\0')
            break;
    }

    printf("%s", str);

    return 0;
}
