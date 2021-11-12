#include<stdio.h>
int main(){
int n;
printf("enter the value");
scanf("%d",&n);
switch(n%2==0){
case 1:printf("even");
break;
case 0:printf("odd");
break;
}
return 0;
}
