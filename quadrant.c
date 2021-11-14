#include<stdio.h>
int main(){
    int x,y;
    printf("enter the value of x-axix ");
    scanf("%d",&x);
    printf("enter the value of y-axix ");
    scanf("%d",&y);
    if(x>0&&y>0){
        printf("first quadrant");
    }
    else if(x<00&&y>0){
        printf("second quadrant");
    }
    else if(x<0&&y<0){
        printf("third quadrant");
    }
    else if(x>0&&y<0){
        printf("fourth quadrant");
    }
    else{
        printf("origin");
    }

}