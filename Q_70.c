#include<stdio.h>
int main(){
int arr[100],n,i,k,temp[100];
printf("Enter number of elements:");
scanf("%d",&n);
printf("Enter %d elements:\n",n);
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("Enter number of positions to rotate:");
scanf("%d",&k);
k=k%n;
for(i=0;i<n;i++){
temp[(i+k)%n]=arr[i];
}
printf("Array after rotation:\n");
for(i=0;i<n;i++)
printf("%d ",temp[i]);
return 0;
}
