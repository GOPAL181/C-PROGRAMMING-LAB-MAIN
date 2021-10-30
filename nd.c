/*write a program that takes a natural number as the value from the user and check whether the value is in power 2²or
 not using a bitwise operator*/
#include<stdio.h>
int main(){
    int n;
    printf("enter the value");
    scanf("%d",&n);
    (n&(n-1)!=0)==0?printf("number is in form 2^2"):printf("number not in form of 2^2");
}