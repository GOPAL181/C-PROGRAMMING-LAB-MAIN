#include<stdio.h>
void main(){
    int i,j,m,n;
printf("enter the val");
scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("enter the value");
            scanf("%d",&a[i][j]);
        }}
for(i=0;i<n;i++){
if(i%2==0){
for(j=0;j<m;j++){
printf("%d",a[i][j]);}}
else{
for(j=(m-1);j>=0;j--){
printf("%d",a[i][j]);}}
printf("\n");}
   
}

