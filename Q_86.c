// Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/

#include <stdio.h>
#include <string.h>
int main()
{
    char arr[50];
    printf("enter the string");
    fgets(arr,50,stdin);

    for (int i=0 ,j=strlen(arr) - 1 ;i<=j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    printf ("%s",arr);
    if (arr[i]=arr[j]){
    printf("number is palindrome");}
    else{
    printf ("number is not palindrome");}
    return 0;
}