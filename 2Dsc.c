#include<stdio.h>//sum 2D array column wise
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
            sum+=a[j][i];
        }
        printf("%d\n",sum);
        sum=0;
    }
}