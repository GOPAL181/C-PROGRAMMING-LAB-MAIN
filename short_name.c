#include<stdio.h>
#include<string.h>
void main(){
    int i,j,len,c=0;
    char x[100];
    scanf("%[^\n]s",x);
    len=strlen(x);
    for(i=0;len-1;i++){
        if(i==0){
            printf("%c",x[0]);
        }
        else if(x[i]==32&&c==0){
            printf("%c",x[i+1]);
            c=c++;
        }
        else if(x[i]==32&&c==1){
            for(j=i+1;j<len;j++){
                printf("%c",x[j]);
            }
        }
    }
    printf("%d",c);
}