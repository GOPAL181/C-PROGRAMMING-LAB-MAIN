#include<stdio.h>
#include<string.h>
void main(){
    char str[100];
    int i,j,len1;
    scanf("%[^\n]s",str);
    len1=strlen(str);
    for(i=0;i<len1;i++){
        if(str[i]>=65&&str[i]<=90){
            str[i]=str[i]+32;
        }
        else if(str[i]>=97&&str[i]<=122){
            str[i]=str[i]-32;
        }
    }
    puts(str);
} 