#include<stdio.h>
int main(){
    int i,j,n,space;
    printf("enter the number of row");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(space=1;space<=(n-i);space++){
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++){
                printf("*");
            }
        printf("\n");
    }
    for(i=n;i>=1;i--){
        for(space=1;space<=(n-i+1);space++){
            printf(" ");
        }
        for(j=1;j<=(2*i-3);j++){
            printf("*");
        }printf("\n");
    }
}