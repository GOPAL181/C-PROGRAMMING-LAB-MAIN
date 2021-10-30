/*write a program that takes a natural number as the value from the user and check whether the value is even or odd using a bitwise operator*/
#include<stdio.h>
int main(){
    int a;
    printf("enter the value");
    scanf("%d",&a);
    (a&1)==0?printf("even number"):printf("odd number");
}