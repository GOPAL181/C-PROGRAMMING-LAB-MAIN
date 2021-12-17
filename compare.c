#include<stdio.h>
int main(){
    int i,x;
    for(i=1;i<=10;i++){
        printf("enter tht age ");
        scanf("%d",&x);
        if(x<=5){
            printf("less tha 5");
        }
        else if(x>5&x<=10){
            printf("more then 5 and less than 10 ");
        }
        else{
            printf("more the 10++");
        }
    }
}