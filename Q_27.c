#include <stdio.h>
int main() {
    int n ,sum =0;
    printf("Enter  numbers : ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        if(i%2!=0){
            sum = sum +i ;}
            
    }
    printf ("%d \n",sum);
    return 0;
}