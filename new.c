#include<stdio.h>
int main(){
    int i=0, j=0,k=1,l=1;
    for(i=0;i<=5;i++){
        for(j=0;j<=i;j++){
            if(i==0||i==1||i==3||i==2||j==0||i==1&&j==1||i==2&&j==2||i==4&&j==1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}