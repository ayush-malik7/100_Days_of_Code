#include <stdio.h>
int main ()
{
    int a , b ;
    printf ("enter number a") ;
    scanf ("%d" , &a );
    printf ("enter number b") ;
    scanf ("%d" , &b );
    int sum = a + b ;
    int product = a * b ;
    int difference = a - b ;
    int quotient = a / b ;
    printf ("difference is %d\n" , difference );
    printf ("quotient is %d\n" , quotient );
    printf ("product is %d\n" , product );
    printf ("sum is %d" , sum );
    return 0 ;
}