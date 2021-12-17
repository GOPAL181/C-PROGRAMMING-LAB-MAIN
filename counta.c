#include<stdio.h>     //programm for array to count no of positive,negative,zero value
int main(){
     int n,i,pos=0,neg=0,zero=0;
    printf("enter the number of elements you want");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter the number");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
if(a[i]>0){pos++;}
else if(a[i]<0){neg++;}
else{zero++;}
}
printf("no of positive=%d",pos);
printf("no of negative=%d",neg);
printf("no of zero=%d",zero);
   
}
