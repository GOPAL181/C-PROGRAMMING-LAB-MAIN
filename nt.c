 /* write a program that take value from the user and divide it by 64 using only bitwise operator*/
#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value");
    scanf("%d",&a);
    b=a>>6;
    printf("value is after dividing by 64 is=");
    printf("%d",b);
}