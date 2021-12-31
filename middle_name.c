#include<stdio.h>
#include<string.h>
void main(){
    int i,j;
    char x[100];
    scanf("%[^\n]s",x);
    for(i=0;x[i]!=32;i++){}
    for(j=i+1;x[j]!=32;j++){
            printf("%c",x[j]);
        }
}