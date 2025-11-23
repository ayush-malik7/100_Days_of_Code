// Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include <stdio.h>
#include <string.h>
int main()
{
    int count =0;
    char l;
    char arr[100];
    printf("enter the string :");
    fgets(arr,100,stdin);
    printf ("enter the letter: ");
    scanf ("%c",&l);
    for(int i =0;arr[i]!='\0';i++){
        if(arr[i]==l)
        count++;
    }
    printf ("%d",count);
    return 0;
}