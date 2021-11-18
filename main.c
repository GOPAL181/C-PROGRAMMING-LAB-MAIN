#include<stdio.h>
void main(){
    int a,b,i,j,c1,c2,l,k,m,n,o,p,x,y,z,q;
    printf("enter the row");
    scanf("%d",&a);
    printf("enter the column");
    scanf("%d",&b);
    c1=a;
    c2=b;
    l=(c1/2)+1;
    k=(c2/2)+1;
    m=l+1;
    n=k+1;
    o=a-1;
    p=b-1;
    for(i=1;i<=a;i++){
        for(j=1;j<=b;j++){
            if(i==1||i==a||j==1||j==b||i==2&&j==k||i==o&&j==k||i==l&&j==2||i==l&&j==p||i==(l+1)&&j==(k-1)||i==(l-1)&&j==(k+1)||
            i==(k+1)&&j==(l+1)||i==(k-1)&&j==(l-1)){
            printf("*");}
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}