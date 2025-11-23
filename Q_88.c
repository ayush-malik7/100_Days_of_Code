// Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/

#include <stdio.h>
#include <string.h>
int main()
{
    char arr[100];
    printf("enter the string :");
    fgets(arr,100,stdin);
    for (int i =0;arr[i]!='\0';i++){
        if(arr[i]==' ')
        arr[i]='-';
    }
    printf ("%s",arr);
    return 0;
}