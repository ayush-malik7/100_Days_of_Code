#include <stdio.h>
int main ()
{
    int r;
    float pi = 3.14 ;
    printf ("enter number r :") ;
    scanf ("%d" , &r );
    float circumference = 2*pi*r ;
    float area = pi*r*r ;
    printf ("circumference is %f\n" ,circumference);
    printf ("area is %f\n" , area );
    return 0 ;
}