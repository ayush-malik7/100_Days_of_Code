#include <stdio.h>
int main () {
    int n;
    printf ("enter a number : ");
    scanf  ("%d",&n);
    if (n%4==0){
        printf (" year is leap ");
    }
    else 
    { printf ("year is not leap"); }
    return 0;
}
