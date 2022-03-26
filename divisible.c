#include<stdio.h>
int main() {
    int a[1000],n,i=1,j=0;
    scanf("%d",&n);
    while(i<1000){
        if(i%3!=0 && i%10!=3){
            a[j]=i;
            printf("%d\n",a[j]);
            if((n-1)==j){
            printf("%d",a[j]);
            break;}
            j++;
        }
        i++;
    }
    return 0;

}
