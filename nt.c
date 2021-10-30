 /* write a programm which take value from user and multiply it by 31,32,33 using only bitwise operator*/
#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("enter the value");
    scanf("%d",&a);
    b=a<<5;
    c=b-a;
    d=b+a;
    printf("value is after multiplying by 31 is=");
    printf("%d",c);
     printf("\nvalue is after multiplying by 32 is=");
    printf("%d",b);
     printf("\nvalue is after multiplying by 33 is=");
    printf("%d",d);
}