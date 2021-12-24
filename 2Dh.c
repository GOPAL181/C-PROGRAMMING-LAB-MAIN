#include<stdio.h>//sum 2D array row wise
void main(){
    int i,j,m,n,sum=0;
printf("enter the val");
scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("enter the value");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(i==0||j==0||i==(n-1)||j==(m-1)){
                printf("%d",a[i][j]);
            }  
            else{
                printf(" ");
            }  
        }
        printf("\n");
    }
}