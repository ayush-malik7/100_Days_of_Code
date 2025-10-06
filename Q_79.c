#include<stdio.h>
int main(){
int a[10][10],n,m,i,j;
printf("Enter rows and columns:");
scanf("%d%d",&n,&m);
printf("Enter matrix elements:\n");
for(i=0;i<n;i++)
for(j=0;j<m;j++)
scanf("%d",&a[i][j]);
printf("Diagonal traversal:\n");
for(int d=0;d<n+m-1;d++){
if(d<m){
i=0;
j=d;
}
else{
i=d-m+1;
j=m-1;
}
while(i<n&&j>=0){
printf("%d ",a[i][j]);
i++;
j--;
}
}
return 0;
}
