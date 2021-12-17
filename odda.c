#include<stdio.h>
int main(){
int n,i,odd=0,even=0,j=0,k=0,l,m;
printf("enter the number of element ");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
printf("enter the number");
scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
printf("%d",a[i]);}
for(i=0;i<n;i++){
if(a[i]%2==0){
even++;
}
else{
odd++;
}}
int b[even],c[odd];
for(i=0;i<n;i++){
if(a[i]%2==0){
b[j]=a[i];
j++;}
else{
c[k]=a[i];
k++;
}}
printf("even array");
for(i=0;i<even;i++){printf("%d",b[i]);}
printf("odd array");
for(i=0;i<odd;i++){printf("%d",c[i]);}

}
