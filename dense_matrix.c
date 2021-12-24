#include<stdio.h>//sum 2D array row wise
void main(){
    int i,j,m,n,count=0;
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
            
        if(a[i][j]==0){
            count+=1;
        }}}
    if((m+n)<=count){
        printf("dense matrix");
    }    
    else{
        printf("not dense matrix");
    }
    
    
}