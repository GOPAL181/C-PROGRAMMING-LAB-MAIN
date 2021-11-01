/*write a program that takes two values from the user and check whether they are valentine or not*/
#include<stdio.h>
int main(){
    int x,y;
    printf("enter the value");
    scanf("%d",&x);
    printf("enter the value");
    scanf("%d",&y);
    ((x+y)==(x^y))?printf("valentine number"):printf("not valentine number");
}