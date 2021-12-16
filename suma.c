 #include<stdio.h>//write a program which add odd and even index element separately
 int main(){
 int n,i,odd=0,even=0;
    printf("enter the number of elements you want");
    scanf("%d",&n);
    int a[n],t[n];
    for(i=0;i<n;i++){
        printf("enter the number");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(i%2==0){
            even=even+a[i];
        }
        else{
            odd=odd+a[i];
        }
    }
    printf("sum of even positioning index%d",even);
    printf("\nsum of odd positioning index%d",odd);
}