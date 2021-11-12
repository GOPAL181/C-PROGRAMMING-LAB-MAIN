#include<stdio.h>
int main(){
int n;
printf("enter the value");
scanf("%d",&n);
switch(n>0){
case 1:
printf("positive");
break;
}
switch(n<0){
case 1:
printf("negative");
break;
}
switch(n==0){
case 1:
printf("number is zero");
break;
}
return 0;
}
