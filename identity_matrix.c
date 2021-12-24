#include<stdio.h>//sum 2D array row wise
void main(){
    int i,j,m,n,c=0;
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
            if(i==j&&a[i][j]!=1){
                c=-1;
                break;    
            }
            else if(i!=j&&a[i][j]!=-0){
                c=-1;
                break;
            }
        }
            
        
    }
    if(c==0){
        printf("identity matrix");
    }
    else{
        printf("not identity matrix");
    }
}