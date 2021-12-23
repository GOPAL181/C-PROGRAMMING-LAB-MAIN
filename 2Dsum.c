#include<stdio.h>
int main(){
    int i,j,sum=0,m,n;
    float avg;
    int a[3][3];
    printf("enter the number of rows and column");
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("enter the value");
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("\nsum is%d",sum);
    avg=(float)sum/(m*n);
    printf("\taverage=%.2f",avg);

}