#include<stdio.h>
void main(){
    int a,b,i;
    char j;
    printf("enter the row");
    scanf("%d",&a);
    printf("enter the column");
    scanf("%d",&b);
    b=b+65;
    for(i=1;i<=a;i++){
        for(j=65;j<=b;j++){
            printf("%c",j);
        }
        printf("\n");
    }

}