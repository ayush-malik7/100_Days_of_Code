#include<stdio.h>
int main(){
int a[10][10],n,m,i,j,diag[20],k=0,flag=1;
printf("Enter rows and columns:");
scanf("%d%d",&n,&m);
printf("Enter matrix elements:\n");
for(i=0;i<n;i++)
for(j=0;j<m;j++)
scanf("%d",&a[i][j]);
for(i=0;i<n&&i<m;i++)
diag[k++]=a[i][i];
for(i=0;i<k;i++){
for(j=i+1;j<k;j++){
if(diag[i]==diag[j]){
flag=0;
break;
}
}
}
if(flag==1)
printf("True");
else
printf("False");
return 0;
}
