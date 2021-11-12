#include<stdio.h>
int main(){
int a,b;
printf("enter the value");
scanf("%d",&a);
printf("enter the value");
scanf("%d",&b);
switch(a>b){
case 1:printf("greater number is %d",a);
break;
case 0:switch(b>a){
case 1:printf("greater number is %d",b);
break;
case 0:printf("both are equal");
break;}
break;}
return 0;
}
