#include<stdio.h>     //programm for array inascending order using bubble sorting
int main(){
     int n,temp,i,k,j;
    printf("enter the number of elements you want");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter the number");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    }
    for(k=0;k<n;k++){
        printf("%d",a[k]);
    }
}