
#include <stdio.h>
int main() {  
    int a[100],n,i,p=0,ne=0,z=0;
    float P,N,Z;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>0){
            p=p+1;
        }
        else if(a[i]<0){
            ne++;
        }
        else{
            z++;
        }
    }
    P=(float)p/n;
    N=(float)ne/n;
    Z=(float)z/n;
    printf("%f\n",P);
    printf("%f\n",N);
    printf("%f",Z);
    
    return 0;
}





