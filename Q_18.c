#include <stdio.h>
int main () {
    int n;
    printf ("enter a marks: ");
    scanf  ("%d",&n);
    if (n>=90 && n<100){
        printf (" grade A");
    }
    else if (n>=80 && n<90)
    {printf ("grade B");}
    else if (n>=70 && n<80)
    {printf ("grade C");}
    else if (n>=60 && n<70)
    {printf ("grade D");}
    else {printf ("grade E ");}
    return 0;
}
