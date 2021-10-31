/*write a program that takes value from the user and find out its navigation  */
#include<stdio.h>
int main(){
    int n;
    printf("enter the value");
    scanf("%d",&n);
    n=~n;
    printf("given value negiation is=");
    printf("%d",n+1);
}