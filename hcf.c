#include<stdio.h>
int main(){
    int x,y,s,g,i=1,z,d;
    printf("enter the value");
    scanf("%d",&x);
    printf("enter the value");
    scanf("%d",&y);
    if(x>y){
        s=y;
        g=x;
    }
    else{
        s=x;
        g=y;
    }
    for(i;i<=s;i++){
        if(x%i==0&&y%i==0){
            d=i;
        }
    }
    printf("HCF is %d",d);
    z=((x*y)/d);
    printf("\nLCM is %d",z);


}