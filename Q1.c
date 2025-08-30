#include <stdio.h>
int main ()
{
    int a , b ;

    printf ("enter number a") ;
    scanf ("%d" , &a );
    printf ("enter number b") ;
    scanf ("%d" , &b );
    int sum = a + b ;
    printf ("sum is %d" , sum );
    return 0 ;
}