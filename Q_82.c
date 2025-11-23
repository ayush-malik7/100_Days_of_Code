// Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/

#include <stdio.h>
#include <string.h>
int main()
{
    char arr [50] ;
    printf ("enter string :");
    fgets (arr, 50,stdin);
    for(int i=0;arr[i]!='\0';i++){
    printf ("%c",arr[i]);
    printf ("\n");
}
return 0;
}