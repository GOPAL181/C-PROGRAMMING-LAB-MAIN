/*write a program that take value from the user and find its compliments*/
#include<stdio.h>
int main(){
    int a;
    printf("enter the value");
    scanf("%d",&a);
    a=~a;
    printf("compliment of value is=%d",a+1);
}