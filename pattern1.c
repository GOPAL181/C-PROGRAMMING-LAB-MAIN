#include<stdio.h>
int main(){
    int i=0, j=0;
    for(i=0;i<=3;i++){
        for(j=0;j<=i;j++){
            if(i==0||i==1||i==3||i==2||j==0||j==1||j==2||j==3){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}