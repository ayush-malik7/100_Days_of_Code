#include <stdio.h>
int main ()
{
    int n ;
    printf ("enter number n :") ;
    scanf ("%d" , &n );
    int a = 0;
    for (int i = 1; i <=n; i++) {
        a = a + i;
    }
    printf ("sum of first n number is %d" , a );
    return 0 ;
}