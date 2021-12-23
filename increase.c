#include<stdio.h>
int main(){
     int size,j,i,e,index;
    printf("enter the number of elements you want");
    scanf("%d",&size);
    int a[size];
    for(j=0;j<size;j++){
        printf("enter the number");
        scanf("%d",&a[j]);
    }
    printf("enter the element&index");
    scanf("%d%d",&e,&index);
    size++;
    for(i=size-1;i>index-1;i--){
        a[i]=a[i-1];
    }
    a[index-1]=e;
    for(i=0;i<size;i++){
        printf("%d",a[i]);
    }
} 