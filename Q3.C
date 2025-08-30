#include <stdio.h>
int main ()
{
    int l, b ;
    printf ("enter number a :") ;
    scanf ("%d" , &l );
    printf ("enter number b :") ;
    scanf ("%d" , &b );
    int perimeter = 2 * (l + b) ;
    int area = l * b ;
    printf ("perimeter is %d\n" , perimeter );
    printf ("area is %d\n" , area );
    return 0 ;
}