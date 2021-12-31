#include<stdio.h>
#include<string.h>
void main(){
    char str[100];
    int i,j,len1;
    scanf("%s",str);
    len1=strlen(str);
    for(i=0;i<len1;i++){
        for(j=0;j<=i;j++){
            printf("%c",str[j]);
        }
        printf("\n");
    }
}