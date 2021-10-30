/*programm for swaping value using bitwise operator taken from user */
#include<stdio.h>
void main(){
    int x,y;
    printf("enter the value");
    scanf("%d",&x);
     printf("enter the value");
    scanf("%d",&y);
    printf("\nentered value1=%d",x);
    printf("\nentered value2=%d",y);
    x=x^y;
    y=x^y;
    x=x^y;
    printf("\nvalue after swapping ");
    printf("\nvalue1=%d",x);
    printf("\nvalue2=%d",y);
}
