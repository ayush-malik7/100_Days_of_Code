// Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/

#include <stdio.h>
#include <string.h>
int main()
{
    char arr[100];
    printf ("enter the string");
    fgets (arr,100,stdin);
    for (int i=0 ;arr[i]!='\0';i++){
        if (arr[i]>='a' && arr[i]<='z')
        arr[i]=arr[i]-32;
        else if (arr[i]>='A' && arr[i]<='Z')
        arr[i]=arr[i]+32;
    }
    printf ("%s", arr);
    return 0;
}