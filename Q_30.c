#include <stdio.h>
int main() {
    int n ,r,x=0;
    printf("Enter  numbers : ");
    scanf("%d",&n);
    for (int i=1;n>0;i++){
            r=n%10;
             x=x*10+r;
            n=n/10;}
    printf ("%d \n", x);
    return 0;
}