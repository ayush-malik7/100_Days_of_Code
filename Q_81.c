// Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/

#include <stdio.h>
#include <string.h>
int main()
{
    int count = 0;
    char arr [50] ;
    printf ("enter string ");
        fgets(arr, 50 , stdin);
    for (int i=0 ;arr[i]!='\0'; i++ ){
        count++;
    }
    count = count-1;
    printf ("%d", count);
    return 0;
}