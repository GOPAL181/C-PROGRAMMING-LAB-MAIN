#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter the number of row");
    scanf("%d",&n);
    for(i=5;i>=1;i--){
        for(j=1;j<=n;j++){
            if((i+j)<=n){
                printf(" ");
            }else{
                printf("*");
            }
        }printf("\n");
    }
}