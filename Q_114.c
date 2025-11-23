// Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    
    printf("Enter the string: ");
    scanf("%s", s);

    int freq[256] = {0};  
    int start = 0, maxLen = 0;

    for (int end = 0; end < strlen(s); end++) {
        freq[(int)s[end]]++;

        while (freq[(int)s[end]] > 1) {
            freq[(int)s[start]]--;
            start++;
        }

        int currentLen = end - start + 1;
        if (currentLen > maxLen)
            maxLen = currentLen;
    }

    printf("Length of longest substring: %d", maxLen);

    return 0;
}
