#include <stdio.h>
int main ()
{
    int a , b , sum ;
    printf ("enter number a") ;
    scanf ("%d" , &a );
    printf ("enter number b") ;
    scanf ("%d" , &b );
    sum = a ;
    a=b ;
    b =sum ;
    printf ("after swapping a is %d\n" , a );
    printf ("after swapping b is %d\n" , b );
    return 0 ;
}