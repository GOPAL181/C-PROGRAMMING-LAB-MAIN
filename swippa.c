# include<stdio.h>
void main(){
    int n,i,j,k,o,rev=0,lv;
    printf("enter the number of elements you want");
    scanf("%d",&n);
    int a[n],t[n];
    for(i=0;i<n;i++){
        printf("enter the number");
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++){
        o=a[j];
        while(o>0){
            lv=o%10;
            rev=(rev*10)+lv;
            o=o/10;
        }t[j]=rev;
    }
    printf("array after reversing\n");
    printf("%d",t[n-1]);
}