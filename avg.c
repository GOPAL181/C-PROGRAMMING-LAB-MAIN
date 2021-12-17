#include<stdio.h>
int main(){
int i,n,sum=0;
float avg;
printf("'enter the no of element");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
sum=sum+a[i];
}
avg=(float)sum/n;
printf("sum%d",sum);
printf("avg%f",avg);
}
