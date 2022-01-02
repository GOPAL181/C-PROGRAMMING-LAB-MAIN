#include<stdio.h>
int main(){
    int i,j,m,n;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for (i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d",a[j][i]);
        }
        printf("\n");
    }
    
}