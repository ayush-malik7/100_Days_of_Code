// Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/

#include <stdio.h>
#include <string.h>
int main()
{
    char arr [50] ;
    printf ("enter a string :");
    fgets (arr,50,stdin);

    for  (int i=0;arr[i]!='\0';i++)
    {
        if (arr[i]>='a' && arr[i]<='z')
        arr[i] = arr[i]-32;
        printf ("%c",arr[i]);
    }
    return 0;
}