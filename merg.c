#include<stdio.h>
void main(){
int m,n,i;
printf("enter the number in array1 and in array2 ");
scanf("%d%d",&m,&n);
int a[m],b[n];
printf("enter the element ");
for(i=0;i<m;i++){
scanf("%d",&a[i]);}
printf("enter the element2 ");
for(i=0;i<n;i++){
scanf("%d",&b[i]);}
for(i=0;i<=n-1;i++){
a[m+i]=b[i];}
for(i=0;i<m+n;i++){
printf("%d",a[i]);}
}
