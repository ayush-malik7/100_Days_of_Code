// Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/

#include <stdio.h>
#include <string.h>
int main()
{
    char arr[100];
    printf("enter the string :");
    int letter=0, space=0, special=0, digit=0;
    fgets(arr,100,stdin);
    for (int i =0;arr[i] !='\0'; i++){
        if (arr[i] ==' ')
        space++;
    else if (arr[i]>='0'&& arr[i]<='9')
    digit++;
    else if ((arr[i]>='a' && arr[i]<='z') ||
    (arr[i]>='A' && arr[i]<='Z'))
    letter++;
    else special++;
}
printf ("space=%d ,digit=%d , letter=%d , special=%d,",space , digit , letter,special);
return 0;
}