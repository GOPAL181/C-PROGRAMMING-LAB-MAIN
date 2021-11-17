#include<stdio.h>
int main(){
    int i=1, j=1;
    for(i=1;i<=7;i++){
        for(j=1;j<=i;j++){
            if(i==7||j==1||i==j){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}