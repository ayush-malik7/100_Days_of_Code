#include <stdio.h>
int main () {
    int a , b, c;
    printf ("enter sides of triangle: ");
    scanf  ("%d",&a);
    printf ("enter sides of triangle: ");
    scanf  ("%d",&b);
    printf ("enter sides of triangle: ");
    scanf  ("%d",&c);
    if (a==b && b==c){
        printf (" equilateral");
    }
    else if (a==b || b==c || a==c)
    {printf ("isoseles");}
    else {printf ("scalene ");}
    return 0;

}