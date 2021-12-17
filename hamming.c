#include<stdio.h >
int main(){
    int x,y,z,c=0,l;
    printf("enter the value");
    scanf("%d",&x);
    printf("enter the value");
    scanf("%d",&y);
    z=x^y;
    while(z>0){
    if(z&1==1){
        c++;
        }
    z=z/2;
    }
    printf("no of 1 =%d",c);
}