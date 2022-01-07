#include<stdio.h>//sum 2D array row wise
void main(){
    int i,j,z=0,p=0,b,n,m;
printf("enter the val");
scanf("%d%d",&n,&m);
    int a[n][m];
    printf("enter the element");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            b=a[i][j];
            if(b==0){
                z=z+1;
            }
            else{
                p++;
            }
        }
    } 
    if(z>p){
        printf("sparse matrix");
    } 
    else if(p>z){
        printf("dense matrix");
    }  
    else{
        printf("not dense nor sparse");
    }
}