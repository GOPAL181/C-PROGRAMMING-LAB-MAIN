#include<stdio.h>
#include<math.h>
int main(){
    int b,c,a;
    float  x,y,d;
    printf("enter the value of b");
    scanf("%d",&b);
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of c");
    scanf("%d",&c);
    d=((pow(b,2))-(4*a*c));
    if(d>0){
        printf("given quadratic eqn have two roots");
        x=((-b+(sqrt(d)))/(2*a));
        y=((-b-(sqrt(d)))/(2*a));
       printf("root 1=%f",x);
       printf("root 2=%f",y);
    }
    else if(d==0){
        printf("given quadratic eqn have same roots");
        x=((-b+(sqrt(d)))/(2*a));
        printf("root 1=%f",x);
        printf("root 2=%f",x);
    }
    else{
        printf("given quadratic eqn have imaginary roots ");
    }
}