#include<stdio.h>
#include<string.h>
void main(){
    char str[100];
    int i,j,len1;
    scanf("%[^\n]s",str);
    len1=strlen(str);
    for(i=1;i<=len1;i++){
        printf("%.*s\n",i,str);
    }
} 