/*write a program that takes value from the user and also take value to find which bit position he wants and give output  as 0,1 */
#include<stdio.h>
int main(){
    int x,p,b;
    printf("enter the value");
    scanf("%d",&x);
     printf("enter the position");
    scanf("%d",&p);
    b=p-1;
    x=x>>b;
    ((x&1)==0)?printf("%d",0):printf("%d",1);
}
