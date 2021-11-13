#include<stdio.h>
int main(){
    int i=0, j=0;
    for(i=0;i<=4;i++){
        for(j=0;j<=i;j++){
            if(i&&j==0||i==4&&j||i==j){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}