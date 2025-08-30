#include <stdio.h>
int main ()
{
    int a , b , sum ;
    printf ("enter number a") ;
    scanf ("%d" , &a );
    printf ("enter number b") ;
    scanf ("%d" , &b );
     a = a + b;
    b = a - b;
    a = a - b;
    printf ("after swapping a is %d\n" , a );
    printf ("after swapping b is %d\n" , b );
    return 0 ;
}